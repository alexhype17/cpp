//
//  task_7.cpp
//  cpp_learning
//
//  Created by Александр on 08.04.2021.
//
#include "task_7.hpp"

void spr(char*, char*, char, int &, int, int, int &);

int task_7()
{
    int i, in, ik, s, findedIdx;
    char x[120], symbol, h[999]={0};
    printf("Введите символ: ");
    std::cin >> symbol;
    std::cin.ignore(1000,'\n');
    
    printf("Введите строку: ");
    std::cin.get(x, 60, '$');
  
    i = 0; in = 0; ik = 0; s = 0;
    while(x[i])
    {
        if(x[i] == ' ' || x[i + 1] == NULL)
        {
            ik = i-1;
            spr(x, h, symbol, findedIdx, in, ik, s);
            in = i+1;
        }
        i++;
    }
    return 0;
}

void spr(char* c, char* h, char symbol, int &findedIdx, int d, int e, int &k)
{
    bool finded = false;
    k++;
    // ksdkkgkse kjksjgkjekej kjsekjkgkjek sjkxjgggseeedssddsdssd
    // ksdkkgkse kjksjgkjekej kjsekjkkjek sjkxjgggseeedssddsdssd
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
    h[findedIdx++] = ' ';
    puts(h);
}
