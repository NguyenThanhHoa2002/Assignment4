#include <iostream>
using namespace std;

class Employee
{
    private:
    string Name;
    int IdNumber;
    string Department;
    string Position;
   
public:
    
    Employee(string name, int idNumber, string department, string position){
        this ->Name = name;
        this ->IdNumber = idNumber;
        this ->Department = department;
        this ->Position = position;
    }
    Employee(string name, int idNumber){
        this ->Name = name;
        this ->IdNumber = idNumber;
        this ->Department = "";
        this ->Position = "";
    }
    Employee(){
        this ->Name = "";
        this ->IdNumber = 0;
        this ->Department = "";
        this ->Position = "";
    }
    string getName(){
        return this->Name;
    }
    void setName(string name){
        this ->Name = name;
    }

     int getIdNumber(){
        return this->IdNumber;
    }
    void setIdNumber(int idNumber){
        this ->IdNumber = idNumber;
    }

     string getDepartment(){
        return this->Department;
    }
    void setDepartment(string department){
        this ->Department = department;
    }

     string gePosition(){
        return this->Position;
    }
    void setPosition(string position){
        this ->Position = position;
    }

    void display(){
        cout << this->Name << "--" << this->IdNumber << "--"<< this->Department << "--"<< this->Position << endl;
    }
};

int main(){

    Employee emp1("Susan Meyers",47899,"Accounting","Vice President");
    Employee emp2("Mark Jones",39119,"IT","Programming");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
    Employee emp4;
    Employee emp5("Thanh Hoa", 270402);


    emp1.display();
    emp2.display();
    emp3.display();
    emp4.display();
    emp5.display();


    return 0;
}
