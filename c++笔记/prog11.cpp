#include<iostream>
using namespace std;
class Complex
{
public:
    Complex(double real,double imag):real(real),imag(imag)
    {}
    ~Complex()
    {
        cout << "��������" << endl;
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
//4������4������
//�����ԣ�ϵͳ������Complex,ostream��Ķ���
//���ɣ���Ա������һ��������Complex*const this,��Ԫ����������
//������ʽ���
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
