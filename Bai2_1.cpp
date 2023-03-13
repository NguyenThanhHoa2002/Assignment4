#include <iostream>
using namespace std;

class Car
{
private:
    /* data */
    int YearModel;
    string Make;
    int Speek;
public:
    Car();
    Car(int yearModel, string make){
        this ->YearModel = yearModel;
        this ->Make = make;
        this ->Speek = 0;
    }
    int getYearModel(){
        return this->YearModel;
    }
    void setName(int yearModel){
        this ->YearModel = yearModel;
    }

    string getMake(){
        return this->Make;
    }
    void setMake(string make){
        this ->Make = make;
    }

    int getSpeek(){
        return this->Speek;
    }
    void setSpeek(int speek){
        this ->Speek = speek;
    }

    void Accelerate(){
        this ->Speek +=5;
    }
    void Brake(){
        this ->Speek -=5;
    }


    void display()
    {
        cout << this->YearModel << "--" << this->Make << "--"<< this->Speek << endl;

    }
};

int main(){
    Car car1(2000, "VinFast");

    car1.display();

    return 0;
}

