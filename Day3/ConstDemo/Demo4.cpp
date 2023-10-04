#include<iostream>

void Demo()
{
    int n1=10;
    int n2=20;
    //const is applied on int not on 'int*'

    //ptr is a constatn pointer to any integer
    int * const ptr = &n1;

    ptr= &n2; //wont work since ptr itself is constant
    //so address inside ptr can be changed

    //since int part is not constant , i can use pointer to change n1's value
    *ptr=100; 
}

int main()
{

}