#include<iostream>

class Complex{
    private:
    float _real;
    float _imag;

    public:
    Complex(float real,float imag)
    : _real(real), _imag(imag){}

    ~Complex(){
        std::cout<<"object destroyed\n";
    }
    
    Complex operator+(Complex n2)
    {
        float r=this->_real + n2._real;
        float i = this-> _imag + n2._imag;

        Complex temp(r, i);
        return temp;
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &rhs);

    
};

//friend function is a function that is not member of a class 
//but still has access to private attribute of class

   std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
    os << "_real: " << rhs._real
       << " _imag: " << rhs._imag;
    return os;
}
