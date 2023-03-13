#include <iostream>
using namespace std;

class RetailItem{
    string description;
    int unitsOnHand;
    double price;

    public:
    RetailItem(string description, int unitsOnHand, double price){
        this -> description = description;
        this -> unitsOnHand = unitsOnHand;
        this -> price = price;
    }
    string getDescription(){
        return this -> description;
    }
    int getUnitsOnHand(){
        return this -> unitsOnHand;
    }
    double getPrice(){
        return this -> price;
    }
    void setDescription(string description){
        this -> description = description;
    }
    void setUnitsOnHand(int unitsOnHand){
        this -> unitsOnHand = unitsOnHand;
    }
    void setPrice(double price){
        this -> price = price;
    }
    void display(){
        cout << "Description: " << this -> description << ", Units On Hand: " 
        << this -> unitsOnHand << ", Price: " << this -> price << endl;
    }
};
int main(){
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 39.95);
    RetailItem item3("Shirt", 20, 24.95);
    item1.display();
    item2.display();
    item3.display();
}