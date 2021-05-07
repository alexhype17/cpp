//
//  task_5.cpp
//  cpp_learning
//
//  Created by Александр on 26.03.2021.
//

#include "task_5.hpp"

int get_sequence(int *arr, int start_idx, int end_idx)
{
//    std::cout << "start_idx "<< start_idx << std::endl;
//    std::cout << "end_idx "<< end_idx << std::endl;
    
    int sum = 0;
    if(start_idx > end_idx)
    {
        while(start_idx>=end_idx)
        {
            if(arr[start_idx] < 0) {
                sum -= arr[start_idx];
            } else{
                sum += arr[start_idx];
            }
            start_idx--;
        }
    }
    else
    {
        while(start_idx<=end_idx)
        {
            if(arr[start_idx] < 0) {
                sum -= arr[start_idx];
            } else{
                sum += arr[start_idx];
            }
            start_idx++;
        }
    }
    return sum;
}

int task_5()
{
    int *arr = new int[1000]();
    int maxSequence;
    
    std::cout << "Введите максимальную разность \n";
    std::cin >> maxSequence;
    
    int i = 0;
    while(true)
    {
        std::cout << "Введите " << i << " элемент массива";
        std::cin >> arr[i];
        i++;
        
        int min = arr[0], max = arr[0];
        int end_idx = 0, start_idx = 0, sign_change_count = 0;
        for(int k=0;k<i;k++)
        {
            if(arr[k] < min)
            {
                min = arr[k];
                end_idx = k;
            } else if(arr[k] > max)
            {
                max = arr[k];
                start_idx= k;
            }
            
            if(arr[k-1] >= 0 && arr[k] < 0) sign_change_count++;
        }
        
        int sequence = get_sequence(arr, end_idx, start_idx);

        std::cout << "sequence " << sequence << std::endl;
        if(sequence > maxSequence) {
            std::cout << "result " << sign_change_count << std::endl;
            break;
        }
    }

    return 0;
}
