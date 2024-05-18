#include<iostream>
using namespace std;
class Sample
{
public:
	int v;
	Sample() { v = 0; }
	Sample(int value) :v(value)
	{
	}
	Sample(Sample& s)
	{
		v=s.v+2;
	}
};
void printanddouble(Sample o)
{
	cout << o.v << endl;
}
int main05()
{
	Sample a(5);//列表初始化
	Sample b = a;//调用拷贝构造函数返回对象
	printanddouble(b);//传参时拷贝
	Sample c(20);//列表初始化
	printanddouble(c);//传参时拷贝
	Sample d;//调用默认构造函数
	d = a;//编译器生成的默认赋值运算符(没有重载)
	//d.v=5
	cout << d.v << endl;
	return 0;
}
#include<fstream>
#include<string>
#include<iostream>
int main06()
{
	fstream file("1.txt",ios_base::in|ios_base::out);
	//ifstream
	//ios_base::in/out
	//ios_base::trunc
	//string line="hello";
	//file << line << endl;
	//string l;
	//file >> l;
	//cout << l << endl;
	//int a[10];
	//fstream outfile("1.txt");
	//if (!outfile.is_open())
	//{
	//	cerr << "error" << endl;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> a[i];
	//	outfile << a[i] << " ";
	//}
	//string str;
	//getline(cin,str);
	//outfile << str;
	//outfile.close();
	//int* p = new int[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> p[i];
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << p[i] << endl;;
	//}
	return 0;
}
#include<string>
class Student
{
protected:
	int id;
	string name;
	int score;
public:
	Student(int i, string n, int cr)
	{
		id = i;
		name = n;
		score = cr;
	}
	virtual void display()
	{
		cout << id << ":" << name << endl;
		cout << score << endl;
	}
};
class Graduate :public Student
{
protected:
	int salary;
public:
	Graduate(int i, string n, int cr, int sa):Student(i,n,cr),salary(sa)
	{}
	virtual void display()
	{
		cout << id << ":" << name << endl;
		cout << score << endl;
		cout << salary << endl;
	}
};
int main()
{
	Student stu(1, "John", 99);
	stu.display();
	Graduate gra(2, "JOHNLIU", 100, 5000);
	gra.display();
	return 0;
}