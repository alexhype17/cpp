//
//  task_7.cpp
//  cpp_learning
//
//  Created by Александр on 08.04.2021.
//
#include "task_7.hpp"

char spr(char*, char, int, int, int &);

int task_7()
{
    int i, in, ik, s;
    char x[80], symbol, new_string[20];
    std::cout << "Введите символ: ";
    std::cin >> symbol;
    
    std::cout << "Введите строку: ";
    std::cin.get(x, 20, '*');
    std::cout << x;
    i = 0; in = 0; ik = 0; s = 0;
    while(x[i])
    {
        if(x[i] == ' ')
        {
            ik = i-1;
            spr(x, symbol, in, ik, s);
//            new_string = std::strcat(new_string, );
        }
        i++;
    }
    
    std::cout << "res " << x;
    return 0;
}

char spr(char* c, char symbol, int d, int e, int &k)
{
    
    int j;
    k++;
    
//    std::cout << symbol << std::endl;
    std::cout << " " << k << " строка: " << std::endl;
    for(j=d;j<=e;j++)
    {
        if(symbol == c[j]) break;
        c[j] = ' ';
//        std::cout << c[j] << std::endl;
    }
    
    return *c;
}
