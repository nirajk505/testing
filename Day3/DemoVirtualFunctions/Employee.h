#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include "Employee.h"

class Employee
{
private:
    /* data */
public:
    Employee() = default; 

    void applyForleaves()
    {
        std::cout <<"employees apoly for leave\n";
    }

    virtual void payTax()
    {
        std::cout <<"em...pays 20% of salary";
    }

    virtual void Display()
    {
        std::cout<<"employees display is called\n";
    }
    

    virtual~Employee() {
        std::cout<<"employees destroyed\n";
    }

};

#endif // EMPLOYEE_H
