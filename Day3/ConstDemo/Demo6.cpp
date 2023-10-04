#include<iostream>

class Demo6
{
private:
    /* data */
public:
    Demo6() = default; 

    void magic()
    {
        std::cout<<"something";
    }
    void Display() const{
        std:: cout<< "this works\n";
    }
    ~Demo6() {}
};

int main()
    {
        const Demo6 e1;//objject on stack
        e1.Display();
        e1.magic();//cannot call non const member function on a const object
    }
)