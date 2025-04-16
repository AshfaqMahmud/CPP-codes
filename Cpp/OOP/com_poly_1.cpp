// compile time polymorphism

#include<iostream>
using namespace std;

class Calculator {
    public:
    static int add(int a, int b) {
        return a+b;
    }
    static double add(double a, double b){
        return a+b;
    }
};

class Complex{
    public:
    int real, imag;
    Complex (int r, int i) : real(r), imag(i) {}

    Complex operator + (const Complex &obj) {
        return Complex(real+obj.real, imag+obj.imag);
    }
    Complex &operator=(const Complex &obj)
    {
        if (this != &obj)
        { // Prevent self-assignment
            real = obj.real;
            imag = obj.imag;
        }
        return *this;
    }
};

int main(){
    float a=6.3,b=3.3;
    int x=6,y=4;
    cout<<Calculator::add(a,b)<<endl;
    cout << Calculator::add(x, y) << endl;
    // operator overloading
    Complex ca(5,4), cb(3,2);
    Complex c = ca + cb;
    Complex d = c;
    cout<< c.real<<"+i"<<c.imag<<endl;
    cout << d.real << "+i" << d.imag;
    return 0;
}