#include<iostream>
using namespace std;
class Complex
{
public:
    Complex(double real,double imag):real(real),imag(imag)
    {}
    ~Complex()
    {
        cout << "析构调用" << endl;
    }
    Complex operator=(const Complex& c);
    friend ostream& operator<<(ostream& output, Complex& c);
    void operator+=(const Complex& c);
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);

private:
    double real, imag;
};
Complex Complex::operator+(const Complex& c)
{
    return Complex(this->real + c.real, this->imag + c.imag);
}
Complex Complex::operator-(const Complex& c)
{
    return Complex(this->real - c.real, this->imag - c.imag);
}
void Complex::operator+=(const Complex& c)
{
    this->real += c.real;
    this->imag += c.imag;
}
Complex Complex::operator=(const Complex& c)
{
    real = c.real;
    imag = c.imag;
    return *this;
}
ostream& operator<<(ostream& output, Complex& c)
{

    output << "(" << c.real;

    if (c.imag >= 0) output << "+";

    output << c.imag << "i)";

    return output;

}
//4个对象，4次析构
//都可以，系统会生成Complex,ostream类的对象
//不可，成员函数第一个参数是Complex*const this,友元函数更合适
//方便链式编程
int main08(void)
{
    Complex c(1.0, 2.0), c1(3.0, 4.0);
    Complex c_add = c + c1;
    Complex c_subtract = c - c1;
    cout << c << endl;
    c += c1;
    cout << c_add << endl;
    cout << c_subtract << endl;
    return 0;
}
