#include "iostream"
#include "iomanip"
#include "Car.h"
using namespace std;

const int col = 3;
const int col_w = 20;

void printSpeed(const string &funcName, const int &times, const int &speed);
void printSpeed();
void drawLine();

int main(int argc, char const *argv[])
{
    int times = 5;

    Car car(1927, "Test");

    drawLine();
    printSpeed();
    drawLine();

    for (int i = 0; i < times; i++)
    {
        car.accelerate();
        printSpeed("accelerate()", i + 1, car.getSpeed());
    }

    drawLine();

    for (int i = 0; i < times; i++)
    {
        car.brake();
        printSpeed("brake()", i + 1, car.getSpeed());
    }

    drawLine();
    return 0;
}

void printSpeed(const string &funcName, const int &times, const int &speed)
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << funcName;
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << times;
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << right << speed;
    cout << setw(2) << right << "|" << endl;
}

void printSpeed()
{
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << "Function";
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << left << "Times";
    cout << setw(2) << left << "|";
    cout << setw(col_w - 1) << right << "Speed";
    cout << setw(2) << right << "|" << endl;
}

void drawLine()
{
    cout << setfill('-');
    cout << setw(col_w * col + (col + 2)) << "-" << endl;
    cout << setfill(' ');
}
