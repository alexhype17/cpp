//
//  task_8.cpp
//  cpp_learning
//
//  Created by Александр on 18.05.2021.
//
/*
 105 1111 10
 178 2222 7
 355 3333 8
 111 4444 2
 127 5555 0
 141 6666 3
 521 7777 9
 147 8888 25
 301 9999 10

 222 1234 20*/
#include "task_8.hpp"

const int count = 10;
struct aeroflot
{
    int id;
    int end_point_number;
    int tickets_count;
};

int task_8()
{
    int max = 0, max_idx = 0;
    struct aeroflot flights[count];
    
    std::cout << "рейс пункт_назначения колво_билетов" << std::endl;
    
    for(int i = 0;i<count;i++)
    {
        std::cin >> flights[i].id;
        std::cin >> flights[i].end_point_number;
        std::cin >> flights[i].tickets_count;
        
        if(flights[i].tickets_count > max) {
            max = flights[i].tickets_count;
            max_idx = i;
        }
    }
    
    std::cout << "Максимальное количество билетов на рейс " << flights[max_idx].id << " в пункт назначения " << flights[max_idx].end_point_number << " и равно " << flights[max_idx].tickets_count;
    
    return  0;
}
