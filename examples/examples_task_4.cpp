//
//  examples_task_4.cpp
//  cpp_learning
//
//  Created by Александр on 21.03.2021.
//

#include "examples_task_4.hpp"

// Прототипы
int fakt(int);
void fav(int, int &);

int examples_task_4() {
    int n,m,c,fn,fm,fmn;

    std::cin >> n >> m;

    c = fakt(m) / fakt(n) * fakt(m-n);

    std::cout << c << std::endl;

    fav(n, fn);
    fav(m,fm);
    fav(m-n,fmn);
    c=fm/(fn*fmn);
    std::cout << c << std::endl;

    return 0;
}

int fakt(int k) {
    int i,r;
    r=1;

    for(i=2;i<=k;i++) {
        r=r*i;
    }

    return r;
}

void fav(int k, int &f) {
    int i;
    f=1;
    for(i=2;i<=k;i++) {
        f=f*i;
    }
}
