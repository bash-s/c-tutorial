#include"vector.h"
#include<cmath>
using namespace std;
namespace VECTOR	
{
	const double Rad_to_deg = 45.0 / atan(1.0);
	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang()
	{
		if (x == 0.0 && y == 0.0)
		{
			ang = 0.0;
		}
		else
		{
			ang = atan2(y, x);
		}
	}
	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}
	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}
}