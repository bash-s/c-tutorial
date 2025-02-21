#pragma once
//#ifndef VECTOR_H
//#define VECTOR_H
#include<iostream>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode
		{
			RECT, POL
		};
	private:
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT)
		{
		}
		~Vector();
		double xval()const { return x; };
		double yval()const { return y; };
		double magval()const { return mag; };
		double angval()const { return ang; };
		Vector operator+(const Vector& b) const;
		Vector operator-(const Vector& b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		friend Vector operator*(double n, const Vector& a);
		friend std::ostream& operator<< (std::ostream& os, const Vector& v);
	};

}
//#endif // !VECROR_H

