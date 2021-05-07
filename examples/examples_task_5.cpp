//
//  examples_task_5.cpp
//  cpp_learning
//
//  Created by Александр on 23.03.2021.
//

#include "examples_task_5.hpp"
/*
 Указатель - это переменная содержашая значение другой переменной
 Виды указателей:
 char *cptf; int *dptr; float *fptr; void * ptr;
 Доступ к переменной, используя указатель вместо имени, называется разыменованием.
 Имя массива без индексов образует указатель на начало этого массива.
 
 Двумерный массив с указателями
 
 */

void examples_task_5_1()
{
    int var1 = 11;
    int var2 = 22;
    int* ptr1;
    int* ptr2;
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    std::cout << *ptr1 << " " << *ptr2;
}

// Вывод массива разными способами
void examples_task_5_2()
{
    int mas[4] = {1,2,3,4};
    int* ptr;
    
    ptr = mas;
    
    for(int i = 0;i<4;i++)
    {
        std::cout << mas[i] << " " << *(mas+i) << " " << *(ptr++)  << "\t";
    }
}

void examples_task_5_3()
{
    void santi1 (float &); // Прототип по ссылкам
    void santi (float *); // Прототип по указателю
    
    float var = 10.0;
    santi1(var);
    
    std::cout << var << " ";
    var = 20.0;
    santi(&var); std::cout << var;
}

void santi1(float &d)
{
    d = d * 2.54;
}

void santi(float *ptrd)
{
    *ptrd = *ptrd*2.54;
}

int examples_task_5()
{
    examples_task_5_3();
    return 0;
}
