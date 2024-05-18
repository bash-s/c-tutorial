#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
class person
{
public:
	int* m_height=nullptr ;
	int m_age=0;
	person()
	{
		cout << "默认构造函数" << endl;
	}
	person(int age,int height)
	{
		cout << "有参构造" << endl;
		m_age = age;
		m_height =new int(height);
	}
	person(const person& p)
	{
		cout << "拷贝构造函数" << endl;
		m_height=new int(*p.m_height);
	}
	~person()//no arguement
	{
		if(m_height!=nullptr)
		{ 
			cout << "析构函数" << endl;
			delete m_height;
			m_height = nullptr;
		}
	}
};
void test()
{
	person p2(10,180);
	person p3(p2);
	//person p2=person(10);
	//person p3=person(p2);
	//person(10)anonymous object
	//the system will release it
}
void test1()
{
	person p(18,180);
	cout <<"p:" << p.m_age << endl;
	cout << *p.m_height << endl;
	person p1(p);
	cout <<"p1:" << p1.m_age << endl;
	cout << *p1.m_height << endl;
}
int main190(void)
{
	test1();
	return 0;
}
//initia list
class qt
{
public:
	int m_a;
	qt(int a,int b,int c) :m_a(a)
	{
		cout << "构造函数" << endl;
	}
	~qt()
	{
		cout << "析构函数" << endl;
	}
};
void test001()
{
	qt q(0,10,666);
	cout << q.m_a << endl;
}
int main0x0(void)
{
	test001();
	return 0;
}
class boy
{
public:
	string b_name;
	boy(string bname)
	{
		b_name = bname;
		cout << "boy的构造" << endl;
	}
	~boy()
	{
		cout << "boy的析构函数" << endl;
	}
};
class girl
{
public:
	string g_name;
	boy g_boy;										//g_boy.b_name=bname
	girl(string gname, string bname):g_name(gname),g_boy(bname)
	{
		cout << "girl构造" << endl;
	}
	~girl()
	{
		cout << "girl的析构函数" << endl;
	}
};
void test5()
{
	girl g("c++","c");
	cout << g.g_name << endl;
	cout << g.g_boy.b_name << endl;
}
//it likes parent and son
int main0x100(void)
{
	test5();
	return 0;
}
class computer
{
public:
	static int m_a;//all obiects share it
	static void fun()
	{
		m_b = 6;
		cout << "static" << endl;
	}
	static int m_b;
};
int computer::m_b = 66;
int computer::m_a = 10;
void f()
{
	computer c;
	cout << c.m_a << endl;
	computer c1;
	c1.m_a = 100;
	cout << c1.m_a << endl;
	c.fun();
	computer::fun();
}
void f1()
{
	computer c;
	cout << c.m_b << endl;
	c.fun();
	cout << c.m_b << endl;
	computer::fun();
	cout << c.m_b << endl;
}
int main0xf10f(void)
{
	cout << computer::m_a << endl;
	f1();
	return 0;
}
class person1
{
public:
	int age;
	person1(int age)
	{
		this->age = age;
	}
	person1* addage(person1&p)
	{
		this->age += p.age;
		return this;
	}
};
void ff()
{
	person1 p1(18);
	cout << p1.age << endl;
	person1 p2(10);
	p2.addage(p1);
	cout << p2.age << endl;
	p2.addage(p1)->addage(p1)->addage(p1);
	cout << p2.age << endl;
}
int main0x1203(void)
{
	ff();
	return 0;
}
class person2
{
public:
	static int m_age;
	void showclassname()
	{
		cout << "this is a class" << endl;
	}
	void showpersonage()
	{
		if (this == nullptr)
		{
			return;
		}
		cout << "m_age:" <<this->m_age <<endl;
	}
};
int person2::m_age = 0;
void fff()
{
	person2* p = nullptr;
	p->m_age = 10;
	p->showclassname();
	p->showpersonage();
}
int main0x04980984(void)
{
	fff();
	return 0;
}
//const function
//const object
class person3
{
public:
	int test = 0;
	mutable int m_a;
	static int modify;
	void chagne()const
	{
		m_a = 100;
	}
	void show()const
	{
		cout << m_a;
	}
};
int person3::modify = 0;
void f0()
{
	const person3 p{};
	p.modify = 100;//const object can change the statec value
	p.m_a = 10;
	p.chagne();
	p.show();
}
int main0x13920(void)
{
	f0();
	return 0;
}
class building
{
private:
	string bedroom;
public:
	string livingroom;
public:
	building()//initialize the varible
	{
		livingroom = "livingroom";
		bedroom = "bedroom";
	}
	~building();
	friend void goodgay(building* building);
};
building::~building()
{

}
void goodgay(building *building)
{
	cout << building->livingroom << endl;
	cout << building->bedroom << endl;
}
class goodgay
{
public:
	building* building;
	goodgay();
};
goodgay::goodgay():building(nullptr)
{
	cout << "goodgay" << endl;
}
void f10()
{
	building building{};
	goodgay(&building);
}
int main0x014948(void)
{
	f10();
	return 0;
}