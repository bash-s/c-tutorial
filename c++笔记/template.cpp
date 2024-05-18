#include<iostream>
using namespace std;
//这个模板没搞懂
//template<typename T1, typename T2>
//void print_(Point<T1, T2>& p);
//template<typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//template<typename T>
//T add(T a, T b, T c)
//{
//	return a + b + c;
//}
//template<typename T1, typename T2>
//class Point;
//template<typename T1,typename T2>
//class Point
//{
//	friend void print(Point<int,int>& p)
//	{
//		cout << p.x << endl;
//	}
//	friend void print_(Point<T1, T2>& p);
//
//public:
//	T1 x, y;
//	T2 length;
//	Point(T1 x,T1 y,T2 length):x(x),y(y),length(length){}
//};
//template<typename T1, typename T2>
//void print_(Point<T1, T2>& p)
//{
//	cout << p.y << endl;
//}
//template<typename t1, typename t2, typename t3>
//class Point_int:public Point<t1,t2>
//{
//public:
//	t3 any;
//};
//int add(int a, int b)
//{
//	return a + b;
//}
//int main10(void)
//{
//	cout << add(1, 2) << endl;;
//	cout << add<int>(1, 2.2) << endl;
//	cout << add<double>(2, 3.8) << endl;
//	cout << add<>(1, 2) << endl;
//	return 0;
//}
//int main(void)
//{
//	Point<int,int> point(1, 1, 1);
//	print(point);
//	print_<int, int>(point);
//	return 0;
//}