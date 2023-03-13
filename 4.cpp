#include <iostream>
using namespace std;

class Inventory{
    int itemNumber;
    int quantity;
    double cost;
    double totalCost = 1.5;
    
    public:
    Inventory(){
        //
        this -> itemNumber = 0;
        this -> quantity = 0;
        this -> cost = 0;
        this -> totalCost = 0.0;
    }
    Inventory(int itemNumber, int quantity, double cost){
        this -> itemNumber = itemNumber;
        this -> quantity = quantity;
        this -> cost = cost;
        setTotalCost();
    }
    void setItemNumber(int itemNumber){
        this -> itemNumber = itemNumber;
    }
    void setCost(int cost){
        this -> cost = cost;
    }
    void setTotalCost(){
        this -> totalCost = this -> quantity * this -> cost;
    }
    int getItemNumber(){
        return this -> itemNumber;
    }
    double getCost(){
        return this -> cost;
    }
    int getQuantity(){
        return this -> quantity;
    }
    double getTotalCost(){
        return this -> totalCost;
    }
    void display(){
        cout << "ID: " << this -> itemNumber << ", Quantity: " << this -> quantity << ", Cost: " << this -> cost
        << ", Total Cost: " << this -> totalCost <<endl; 
    }
};
int main(){
    Inventory item1;
    Inventory item2(1234, 10, 30.54);
    item1.display();
    item2.display();
}