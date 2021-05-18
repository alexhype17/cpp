//
//  task_7.cpp
//  cpp_learning
//
//  Created by Александр on 08.04.2021.
//
#include "task_7.hpp"

void spr(char*, char*, char, int, int, int &);

int task_7()
{
    int i, in, ik, s;
    char x[40], symbol;
    char* new_string = new char[999];
    printf("Введите символ: ");
    std::cin >> symbol;
    std::cin.ignore(1000,'\n');
    
    printf("Введите строку: ");
    std::cin.get(x, 40, '$');
  
    i = 0; in = 0; ik = 0; s = 0;
    while(x[i])
    {
        if(x[i] == ' ')
        {
            ik = i-1;
            char h[80];
            spr(x, h, symbol, in, ik, s);
            std::strcat(new_string, h);
            in = i+1;
        }
        i++;
    }
    
    puts(new_string);
    return 0;
}

void spr(char* c, char* h, char symbol, int d, int e, int &k)
{
    
    bool finded = false;
    int findedIdx = 0;
    k++;
    
//    std::cout << symbol << std::endl;
    std::cout << " " << k << " строка: start" << d << " end " << e << std::endl;
    for(int j=d;j<=e;j++)
    {
        if(symbol == c[j]) {
            finded = true;
        }
        if(finded) {
            h[findedIdx] = c[j];
            findedIdx++;
        }
    }
    h[findedIdx] = ' ';
    puts(h);
}
