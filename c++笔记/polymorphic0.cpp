#include<iostream>
using namespace std;
class abstract
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int num1;
	int num2;
	abstract():num1(6),num2(66)
	{
		
	}
};
class subcaculator:public  abstract
{
public:
	int getresult()
	{
		return num1 - num2;
	}
};
class multicaculator :public  abstract
{
public:
	int getresult()
	{
		return num1 * num2;
	}
};
class addcaculator :public  abstract
{
public:
	int getresult()
	{
		return num1 + num2;
	}
};
int main05(void)
{
	abstract* abc = new addcaculator;
	cout << abc->getresult() << endl;
	delete abc;
	abc = new subcaculator;
	cout << abc->getresult() << endl;
	delete abc;
	abc = new multicaculator;
	cout << abc->getresult() << endl;
	delete abc;
	abc = nullptr;
	return 0;
}