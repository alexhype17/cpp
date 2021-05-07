//
//  task_3.cpp
//  cpp_learning
//
//  Created by Александр on 21.03.2021.
//

#include "task_3.hpp"

int task_3() {
    int n,c,k;
    float x, f1, f2, m, d, r;

    std::cout << "Введите число членов ряда";
    std::cin >> c;

    std::cout << "Введите х, больше нуля";
    std::cin >> x;

    while(x<=0) {
        std::cout << "Введите х, больше нуля";
        std::cin >> x;
    }

    f1 = log(x);
    f2 = 0;
    n = 0;

    while(n < c) {
        m = x-1;
        d = x+1;

        for(k=1; k<2*n+1;k++) {
            m=m*(x-1);
            d=d*(x+1);
        }

        r= m/((2*n+1) *d);
        f2=f2+r;
        n++;
    }


    std::cout << "Зачение логарифма - " << f1 << std::endl;
    std::cout << "Значение через ряд - " << f2 * 2 << std::endl;
    std::cout << "Число рядов - " << n << std::endl;

    return 0;
}
