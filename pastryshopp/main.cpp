//
//
//  pastryshopp.cpp
//
//  Created by Danika on 5/26/26.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// parent pastry class
class Pastry{
private:
    string name;
    double price;
public:
    Pastry() {
        
    };
    Pastry(string n, double p) {
        name = n;
        price = p;
        
    }
    string getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    
    virtual void displayInfo() {
        cout << name << " $" << price;
    }
};

// croissant
class Croissant : public Pastry {
private:
    string filling;
public:
    Croissant(string n, double p, string f) : Pastry(n, p) {
       // can't touch private members in parent classes directly
        filling = f;
        
    }
    virtual void displayInfo() {
        cout << filling << " " << getName() << " $" << getPrice();
    }
    
};

// coffee
class Coffee : public Pastry {
private:
    string size;
public:
    Coffee(string n, double p, string s) : Pastry(n, p) {
        size = s;
    }
    virtual void displayInfo() {
        cout << size << " " << getName() << " $" << getPrice();
    }
    
};

// cake
class Cake : public Pastry {
private:
    int slices;
public:
    Cake(string n, double p, int s) : Pastry(n, p) {
       // can't touch private members in parent classes directly
        slices = s;
        
    }
    virtual void displayInfo() {
        cout << slices << " " << getName() << " $" << getPrice();
    }
    
};

    
    



    




