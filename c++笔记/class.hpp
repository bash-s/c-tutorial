#pragma once
#ifndef CLASS_H
#define CLASS_H


#include<iostream>
#include<cmath>


int max(int a, int b);
class First;
double triangle(double a, double b, double c);


int max(int a, int b)
{
	return a > b ? a : b;
}
int (*M)(int a, int b) = &max;


class First
{
public:
	int data;
	int* ptr;
	void first()
	{
		std::cout << "hello world" <<std::endl;
	}
	First(int d,int*p):data(d),ptr(p){}
	First (){}
	explicit First(First& f)
	{
		this->ptr = new int(*f.ptr);
	}
};

double triangle(double a, double b, double c)
{
	double s = (a + b + c) / 2;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		throw a;
	}
	return sqrt(s * (s - a) * (s - b) * (s - c));
}


#endif