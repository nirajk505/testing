#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "Employee.h"

class Manager :public Employee
{
private:
    /* data */
public:
    Manager() =default;

    void applyForleaves()
    {
        std::cout <<"manager apoly for leave\n";
    }
 virtual void payTax()
    {
        std::cout <<"manager pays 20% of salary";
    }

    ~Manager() {
        std::cout<< "manager is destroyed";
    }
};

#endif // MANAGER_H
