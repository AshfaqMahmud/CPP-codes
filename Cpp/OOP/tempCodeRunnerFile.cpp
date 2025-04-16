class Complex{
    public:
    int real, imag;
    Complex (int r, int i) : real(r), imag(i) {}

    Complex operator + (const Complex &obj) {
        return Complex(real+obj.real, imag+obj.imag);
    }
    Complex operator = (const Complex &obj) {
        return Complex(real=obj.real, imag=obj.imag);
    }
};