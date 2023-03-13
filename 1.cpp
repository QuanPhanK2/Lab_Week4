#include <iostream>
using namespace std;

class Employee{
    string name;
    int idNumber;
    string department;
    string position;

    public:
    Employee(string name, int idNumber, string department, string position){
        this -> name = name;
        this -> idNumber = idNumber;
        this -> department = department;
        this -> position = position;
    }
    Employee(string name, int idNumber){
        this-> name = name;
        this -> idNumber = idNumber;
    }
    Employee(){
        this -> name = "";
        this -> idNumber = 0;
        this -> department = "";
        this -> position = ""; 
    };

    string getName(){
        return this -> name;
    }
    int getIdNumber(){
        return this -> idNumber;
    }
    string getDepartment(){
        return this -> department;
    }
    string getPosition(){
        return this -> position;
    }
    void setName(string name){
        this -> name = name;
    }
    void setIdNumber(int idNumber){
        this -> idNumber = idNumber;
    } 
    void setDepartment(string department){
        this -> department = department;
    }
    void setPosition(string position){
        this -> position = position;
    }
    void display(){
        cout << "Name: " << this -> name << ", ID: " 
        << this -> idNumber << ", Department: " << this -> department
        << ", Position: " << this -> position <<endl;
    }
};
int main(){
    Employee emp1("Susan Meyese",47899,"Accounting","Vice Pressident");
    Employee emp2("Mark Jones", 39119,"IT", "Programmer");
    Employee emp3("Joy Roggers", 81774, "Manualfacturing", "Engineer");
    Employee emp4;
    emp1.display();
    emp2.display();
    emp3.display();
    emp4.display();
    return 0;
}