//
//  task_9.cpp
//  cpp_learning
//
//  Created by Александр on 19.05.2021.
//

#include "task_9.hpp"

class Aeroflot {
private:
    int _id;
    int _end_point_number;
    int _tickets_count;
public:
    Aeroflot() // конструктор по умолчанию
    {
        _id = 0;
        _end_point_number = 0;
        _tickets_count = 0;
    }

    // Конструктор с двумя параметрами, один из которых имеет значение по умолчанию
    Aeroflot(int id, int end_point_number, int tickets_count)
    {
        _id = id;
        _end_point_number = end_point_number;
        _tickets_count = tickets_count;
    }

    void getdate()
    {
        std::cout << "рейс пункт_назначения колво_билетов" << std::endl;
        std::cin >> _id;
        std::cin >> _end_point_number;
        std::cin >> _tickets_count;
    }

    void display()
    {
        std::cout << "Объект " << " рейс " << _id << " пункт назначения " << _end_point_number << " кол во билетов  " << _tickets_count << std::endl;
    }
    
    int get_tickets_count()
    {
        return _tickets_count;
    }
};

int task_9()
{
    Aeroflot flights[3];
    
    int sum = 0;

    for(int i = 0;i<3;i++)
    {
        flights[i] = Aeroflot();
        flights[i].getdate();
    }
    
    for(int i = 0;i<3;i++)
    {
        flights[i].display();
        sum += flights[i].get_tickets_count();
    }
    
    std::cout << "All tickets = " << sum << std::endl;;
    return 0;
    
}
