#include<iostream>
using namespace std;
class java
{
public:
	void header()
	{
		cout << "public header" << endl;
	}
	void footer()
	{
		cout << "public footer" << endl;
	}
	void left()
	{
		cout << "java,python,c++" << endl;
	}
	void content()
	{
		cout << "java" << endl;
	}
};
class python:public java
{
public:

};
void test0x1()
{
	java ja{};
	ja.header();
	python p{};
	p.header();
}
int main01(void)
{
	test0x1();
	return 0;
}
class father
{
public:
	int _public;
protected:
	int _protected;
private:
	int _private;
};
class son1 :public father
{
public:
	void function()
	{

	}
};