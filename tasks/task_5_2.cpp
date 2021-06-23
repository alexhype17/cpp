//
//  task_5_2.cpp
//  cpp_learning
//
//  Created by Александр on 19.06.2021.
//

#include "task_5_2.hpp"

int task_5_2()
{
    int *arr = new int[1000]();
    int num, s;
    
    std::cout << "Введите число \n"; // 3
    std::cin >> num;
    // 1 -2 -3 4 -5 -6 7 8 9
    int i = 0;
    while(true)
    {
        std::cout << "Введите " << i << " элемент массива" << std::endl;
        std::cin >> arr[i];
        i++;
        
        int end_idx = 0, start_idx = 0, h = 1;
        for(int k=0;k<i;k++)
        {
            if(arr[k-1] >= 0 && arr[k] < 0) start_idx = k;
            else if(arr[k-1]<=0 && arr[k]>0) end_idx = k;
            else {
                h++;
                continue;
            }
            h = 1;
        }
        s=0;
        for(;start_idx<end_idx;start_idx++)
        {
            s+=arr[start_idx];
        }
        if(h>=num) {
            std::cout << "Ожидаемый результат: " << s << std::endl;
            break;
        }
    }

    return 0;
}
