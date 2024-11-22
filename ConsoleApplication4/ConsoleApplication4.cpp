#include <iostream>

using namespace std;

class Vehicle {
protected:
    int amountOfWheels;
    double speed;
public:
    Vehicle();
    Vehicle(int first, double second);
    void PrintInfoAboutVehicle();

    int GetAmountOfWheels() {
        return amountOfWheels;
    }

    double GetSpeed() {
        return speed;
    }

    void SetAmountOfWheels(int first) {
        amountOfWheels = first;
    }

    

    void SetSpeed(double first) {
        if (first > 10.1) {
            speed = first;
        }
    }

    
    bool IsAmountOfWheelsValid() {
        return amountOfWheels > 0;
    }

    
    void inline PrintAmountOfWheels() {
        cout << amountOfWheels;
    }
};

Vehicle::Vehicle() {
    amountOfWheels = 4;
    speed = 45.3;
}

Vehicle::Vehicle(int first, double second) {
    amountOfWheels = first;
    speed = second;
}

void Vehicle::PrintInfoAboutVehicle() {
    cout << "-------------------------" << endl;
    cout << "Amount of wheels: " << amountOfWheels << endl;
    cout << "Speed of this vehicle: " << speed << endl;
    cout << "-------------------------" << endl;
}

class Auto : protected Vehicle {
    string brand;
public:
    Auto() {
        brand = "Mercedes";
    }
    void PrintInfoAboutVehicle() {
        cout << "There is an Auto method" << endl;
        cout << "------------------------------" << endl;
        cout << "Amount of wheels: " << amountOfWheels << endl;
        cout << "Speed: " << speed << endl;
        cout << "Brand: " << brand << endl;
        cout << "------------------------------" << endl;
    }

};

void main() {
    Vehicle obj = Vehicle(4, 20.2);

    obj.SetAmountOfWheels(5);

    obj.SetSpeed(100.2);

    obj.PrintInfoAboutVehicle();

    Auto autoObj;

    autoObj.PrintInfoAboutVehicle();
}