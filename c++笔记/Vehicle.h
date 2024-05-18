class Vehicle;

class Bicycle;

class Car;

class Motorcycle;



class Vehicle

{

public:

    Vehicle()

    {}

    Vehicle(float sp, float w);

    void display();

private:

    float speed;

    float weight;

};



class Bicycle :virtual public Vehicle

{
public:
    Bicycle()
    {}
    Bicycle(float sp, float w, float h);

protected:

    float high;

};



class Car :virtual public Vehicle

{

public:

    Car()

    {}

    Car(float sp, float w, int num);

protected:

    int seatnum;

};



class Motorcycle :public Bicycle, public Car

{

public:

    Motorcycle()

    {}

    Motorcycle(float sp, float w, float h, int num);

    void display();

};




