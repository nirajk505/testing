#include "Manager.h"
#include "Employee.h"

int main()
{
    Employee* arr[2];

    arr[0]=new Employee();
    arr[1]=new Employee();

//Employee version of function called bcoz apply for leaves is non virtual
    arr[0]->applyForleaves();
    arr[1]->applyForleaves();

    //version specific to type of object called bcoz paytax is virtual
    arr[0]->payTax();
    arr[1]->payTax();

//Employee version of function called bcoz there is no display in child class manager
    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];
}