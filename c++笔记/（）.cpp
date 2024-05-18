#include<iostream>
#include<string>
using namespace std;
class myprint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class myadd
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};
void test000()
{
	myprint p{};
	p("hello world");
}
void test00()
{
	myadd a{};
	int r = a(6, 6);
	cout << r << endl;
	cout << myadd()(6, 666) << endl;
}
int main0x9487(void)
{
	test00();
	return 0;
}