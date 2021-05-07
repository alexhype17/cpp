//
//  task_6.cpp
//  cpp_learning
//
//  Created by Александр on 08.04.2021.
//

#include "task_6.hpp"

int** function(int, int, int);
void procedure(int *, int, int, int);

int task_6()
{
    int arr2[1000][1000];
    int c, m, n, sum, sum2;
    
    std::cout << "Введите c \n";
    std::cin >> c;
    
    std::cout << "Введите m \n";
    std::cin >> m;
    
    std::cout << "Введите n \n";
    std::cin >> n;
    
    int** arr = function(m, n, c);
    procedure(&arr2, m, n, c);
    
    return 0;
}

int** function(int m, int n, int c)
{
    int arr [1000][1000], sum;
    
    for(int i = 0;i<m;i++)
    {
        sum = 0;
        for(int k = 0;k<n;k++)
        {
            std::cout << "Введите строчку №" << k << " Столбца №" << i << std::endl;
            std::cin >> arr[i][k];
            if(arr[i][k] < c) sum++;
            std::cout << "Количество элементов меньше C через функцию -> " << sum << std::endl;
        }
    }
    return arr;
}

void procedure(int *arr, int m, int n, int c)
{
    int sum;
    for(int i = 0;i<m;i++)
    {
        sum = 0;
        for(int k = 0;k<n;k++)
        {
            std::cout << "Введите строчку №" << k << " Столбца №" << i << std::endl;
            std::cin >> *arr[i][k];
            if(*arr[i][k] < c) sum++;
            std::cout << "Количество элементов меньше C через процедуру -> " << sum << std::endl;
        }
    }
}


/*
 
 
 int arr [1000][1000], sum;
 
 for(int i = 0;i<m;i++)
 {
     sum = 0;
     for(int k = 0;k<n;k++)
     {
         std::cout << "Введите строчку №" << k << " Столбца №" << i << std::endl;
         std::cin >> arr[i][k];
         if(arr[i][k] < c) sum++;
         std::cout << "Количество элементов меньше C через функцию -> " << sum << std::endl;
     }
 }
 
 */

