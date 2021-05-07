//
//  task1.cpp
//  cpp_learning
//
//  Created by Александр on 21.03.2021.
//
#include "task_2.hpp"

int task_2() {
    float x,y,r,a;

    std::cout << "Введите x: ";
    std::cin >> x;

    std::cout << "Введите y: ";
    std::cin >> y;

    std::cout << "Введите r: ";
    std::cin >> r;

    std::cout << "Введите a: ";
    std::cin >> a;

    if( (x*x+(y*y)>r*r) && y<=0 && x<=a) {
        if((x*x+y*y==r*r) || y == 0 || x == a) std::cout << "Точка принадлежит границе области";
        else std::cout << "Точка попадает в область";
    } else std::cout << "Точка не попадает в область";
    return 0;
}
