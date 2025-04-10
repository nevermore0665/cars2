#include <iostream>
#include <string>
#include <vector>  // Needed for using std::vector

using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN;              // Vehicle Identification Number (should be unique for each car)
    string make;             // Car brand (e.g., Toyota, Ford)
    string model;            // Specific model (e.g., Corolla, Mustang)
    int year;                // Manufacturing year
    double mileage;          // Current mileage of the car
    vector<string> owners;   // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }


    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        
        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};
    
int main() {
    vector <string> ownerList = {"Jason Bourne","Dwayne Johnson", "Arnold Schwarzenegger", "Sylvester Stallone" };
    Car Car("JF2SHBEC2BH773722", "Chevy", "Z71", 2005, 122367,ownerList);
    Car.displayInfo();
    
 return 0;   
}

// What attributes--if any--should be private, and why?
// 

/*
Write answer here:
The whole class of Car, So someone can not modify the owners from the Vin. You would need another class to reference it or the constructor seems to achieve that.



*/