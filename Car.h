#include "string"

using namespace std;


class Car
{
private:
    
    int yearModel;

    
    string make;

   
    int speed;

public:
    
    Car(const int &a_yearModel, const string &a_make);

    
    int getYearModel() const;

  
    string getMake() const;

    
    int getSpeed() const;

    
    void accelerate();

    
    void brake();
};

Car::Car(const int &a_yearModel, const string &a_make)
{
    yearModel = a_yearModel;
    make = a_make;
    speed = 0;
}

int Car::getYearModel() const
{
    return yearModel;
}

string Car::getMake() const
{
    return make;
}

int Car::getSpeed() const
{
    return speed;
}

void Car::accelerate()
{
    speed += 5;
    if (speed < 0)
        speed = 0;
}

void Car::brake()
{
    speed -= 5;
    if (speed < 0)
        speed = 0;
}
