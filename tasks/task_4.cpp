//
//  task_4.cpp
//  cpp_learning
//
//  Created by Александр on 21.03.2021.
//

#include "task_4.hpp"

double eps;
double get_result_by_function(double);
void get_result_by_procedure(double, double *);

int task_4()
{
    double x,a,d,c,z,powres,g;
    std::cout << "Введите x ";
    std::cin >> x;
    std::cout << "Введите eps ";
    std::cin >> eps;
    std::cout << std::endl;
    z = pow(x, 1.0 / 3);
    std::cout << "значение через математику = " << z << std::endl;
    a = get_result_by_function(x);
    std::cout << "Значение через функцию = " << a << std::endl;
    get_result_by_procedure(x,&g);
    std::cout << "Значение через процедуру = " << a << std::endl;
    std::cout << std::endl;

    c = get_result_by_function(get_result_by_function(x) + get_result_by_function(x + get_result_by_function(x)));
    std::cout << "F(x) через функцию = " << c << std::endl;
    get_result_by_procedure(get_result_by_function(x) + get_result_by_function(x + get_result_by_function(x)),&d);
    std::cout << "F(x) через процедуру  = " << d << std::endl;
    powres = pow(pow(x,1.0/3)+pow(x+pow(x,1.0/3),1.0/3), 1.0 / 3);
    std::cout << "F(x) через pow = " << powres << std::endl;

    return 0;
}

double get_result_by_function(double x)
{
    double y1, y0;
    y0 = x;
    y1 = (2*y0+(x/pow(y0, 2))) / 3;
    while ((abs(y0 - y1)) > eps) {
        y0 = y1;
        y1 = (2*y0+(x/pow(y0, 2))) / 3;
    }
    x = y1;
    return x;
}

void get_result_by_procedure(double x, double *res)
{
    double y1, y0;
    y0 = x;
    y1 = (2*y0+(x/pow(y0, 2))) / 3;
    while ((abs(y0 - y1)) > eps) {
        y0 = y1;
        y1 = (2*y0+(x/pow(y0, 2))) / 3;
    }
    *res = y1;
}

