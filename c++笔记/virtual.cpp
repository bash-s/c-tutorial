#include<iostream>
using namespace std;
class Base
{
public:
	virtual void f() = 0;
};
class Son :public Base
{
public:
	virtual void f()
	{
		cout << "f" << endl;
	}
};
int main04(void)
{
	Son s{};
	Base* b = &s;
	b->f();
	Base& b1 = s;
	b1.f();
	Base *b2 = new Son;
	b2->f();
	return 0;
}