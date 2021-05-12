//
//  task_6.cpp
//  cpp_learning
//
//  Created by Александр on 08.04.2021.
//

#include "task_6.hpp"

int task_6()
{
    int c, m, n, sum[1000]={0}, sum2[1000]={0};
    
    std::cout << "Введите c \n";
    std::cin >> c;
    
    std::cout << "Введите m \n";
    std::cin >> m;
    
    std::cout << "Введите n \n";
    std::cin >> n;
    
    // индексы
    int arr [1000][1000];
    for(int i = 0;i<m;i++)
    {
        for(int k = 0;k<n;k++)
        {
            std::cin >> arr[i][k];
            if(arr[i][k] < c) sum[i]++;
            if(k==n-1) {
                for(int j = 0;j<n;j++) std::cout << arr[i][j] << " ";
                std::cout << " => " << sum[i] << std::endl;
            }
        }
    }
    std::cout << "Указатели " << std::endl;
    // указатели
    int *arr2 = new int[n*m];
    for(int i = 0;i<m;i++)
    {
        for(int k = 0;k<n;k++)
        {
            std::cin >> *(arr2 + i *n+k);
            if(*(arr2 + i *n+k) < c) (*(sum2+i))++;
            if(k==n-1) {
                for(int j = 0;j<n;j++) std::cout << *(arr2 + i *n+j) << " ";
                std::cout << " => " << *(sum2+i) << std::endl;
            }
        }
//        delete [] arr2;
    }
    
    return 0;
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

