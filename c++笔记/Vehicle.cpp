#include<iostream>
#include"vehicle.h"
using namespace std;
Vehicle::Vehicle(float sp, float w)
{
    speed = sp;
    weight = w;
}
void Vehicle::display()
{
    cout << "speed: " << speed << " " << "weight: " 
        << weight << endl;
}

Bicycle::Bicycle(float sp, float w, float h) :Vehicle(sp, w)
{
    high = h;
}

Car::Car(float sp, float w, int num) :Vehicle(sp, w)
{
    seatnum = num;
}

Motorcycle::Motorcycle(float sp, float w, float h, int num)
    :Vehicle(sp, w), Bicycle(sp, w, h), Car(sp, w, num)
{}

void Motorcycle::display()
{
    Vehicle::display();
    cout << "high: " << high << " " << "seatnum: " << seatnum << endl;
}
