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

class Pastry{
private:
    string name;
    double price;
public:
    Pastry() {
        
    };
    Pastry(string name, double price) {
        
    };
    string getName() {
        return name;
    };
    double getPrice() {
        return price;
    };
    
    void virtual displayInfo() {
        cout << name << " " << price;
    };
};
    
    


int main() {
    
    
}



