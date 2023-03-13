#include <iostream>
using namespace std;

class Car{
    int yearModel;
    string make; 
    int speed;
    public: 
    Car(int yearModel){
        this -> make = "No branch";
        this -> speed = 0;
    }
    Car(int yearModel, string make, int speed){
        this -> yearModel = yearModel;
        this -> make = make;
        this -> speed = speed;
    }
    int getYearModel(){
        return this -> yearModel;
    }
    string getMake(){
        return this -> make;
    }
    int getSpeed(){
        return this -> speed;
    }
    void setYearModel(int YearModel){
        this -> yearModel = YearModel;
    }
    void accelerate(){
        this -> speed = speed + 5;
    }
    void brake(){
        this -> speed = speed - 5;
    }
    void display(){
        cout <<"Year Model: " << this -> yearModel << ", Branch: " << this -> make << ", speed: " << this -> speed << endl; 
    }
};
int main(){
    Car car1(2000, "Vinfast", 100);
    car1.display();
    car1.brake();
    car1.display();

    Car car2(1997);
    car2.accelerate();
    car2.display();
    return 0;
}