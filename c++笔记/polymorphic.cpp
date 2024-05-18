#include<iostream>
using namespace std;
class animal
{
public:
	virtual void speak()
	{
		cout << "animal" << endl;
	}
};
class dog :public animal
{
public:
	void speak()
	{
		cout << "dog" << endl;
	}
};
void dospeak(animal &animal)
{
	animal.speak();
}
int main04(void)
{
	dog d{};
	//dospeak(d);
	animal *a{};
	a = &d;
	a->speak();
	return 0;
}