//
//  task_5_3.cpp
//  cpp_learning
//
//  Created by Александр on 23.06.2021.
//

#include "task_5_3.hpp"

int diff(int* arr)
{
    int pos=0,neg=0;
    while(*arr)
    {
        if (*arr>0) pos+=abs(*arr);
        else if (*arr<0) neg+=abs(*arr);
        *arr++;
    }
    return neg - pos;
}

int task_5_3()
{
    int *arr = new int[1000]();
    int num;
    std::cout << "Введите число \n";
    std::cin >> num;
    // -2 3 4 -17
    int i = 0;
    while(true)
    {
        std::cout << "Введите " << i << " элемент массива" << std::endl;
        std::cin >> arr[i];
        i++;
        int min=0,max=0;
        for(int k=0;k<i;k++)
        {
            if(arr[k]>max) max = arr[k];
            else if(arr[k]<min) min = arr[k];
        }
        if(diff(arr) > num) {
            std::cout << "min " << min << " max " << max << std::endl;
            break;
        }
    }

    return 0;
}
