#include<iostream>
using namespace std;
class animal
{
public:
	virtual void speak() = 0;
	animal()
	{
		cout << "animal�Ĺ���" << endl;
	}
	virtual ~animal() = 0;
};
animal::~animal()
{
	
		cout << "animal������" << endl;
	
}
class cat :public animal
{
public:
	virtual void speak();
	string* Name;
	cat()
	{
		Name = nullptr;
		cout << "cat�Ĺ���" << endl;
	}
	cat(string name)
	{
		Name = new string(name);
	}
	~cat()
	{
		if (Name == nullptr)
		{
			cout << "cat������" << endl;
			delete Name;
			Name = nullptr;
		}
	}
};
void cat::speak()
{
	cout << "cat is speaking" << endl;
}
int main06(void)
{
	animal* animal = new cat;
	animal->speak();
	delete animal;
	return 0;
}