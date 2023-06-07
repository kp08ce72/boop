//ii.	Define a class vehicle. Inherit vehicle into two-wheelers and four-wheelers. 
//Inherit two-wheelers into bicycle and scooters. Inherit four-wheelers into diesel vehicles and petrol vehicles. 
//Provide a virtual function that calculates the mileage of the vehicles.

#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    virtual float calculateMileage() = 0;
};

// Derived class: TwoWheelers
class TwoWheelers : public Vehicle {
public:
    TwoWheelers(string b, int y) : Vehicle(b, y) {}

    virtual float calculateMileage()=0;
};

// Derived class: Bicycle
class Bicycle : public TwoWheelers {
public:
    Bicycle(string b, int y) : TwoWheelers(b, y) {}
    float calculateMileage(){
        float km,fuel;
        cout<<"For Electric Bicycle:"<<endl;
        cout<<"Enter Number of  Unit Charged:"<<endl;
        cin>>fuel;
        cout<<"Enter Total Distance Travelled:"<<endl;
        cin>>km;
        return km/fuel;
    }
};

// Derived class: Scooters
class Scooters : public TwoWheelers {
public:
    Scooters(string b, int y) : TwoWheelers(b, y) {}
    float calculateMileage(){
        float km,fuel;
        cout<<"For Petrol Scooters:"<<endl;
        cout<<"Enter Petrol filled/used(in litres):"<<endl;
        cin>>fuel;
        cout<<"Enter Total Distance Travelled:"<<endl;
        cin>>km;
        return km/fuel;
    }
};

// Derived class: FourWheelers
class FourWheelers : public Vehicle {
public:
    FourWheelers(string b, int y) : Vehicle(b, y) {}

   virtual float calculateMileage()=0;
};

// Derived class: DieselVehicles
class DieselVehicles : public FourWheelers {
public:
    DieselVehicles(string b, int y) : FourWheelers(b, y) {}
    float calculateMileage(){
        float km,fuel;
        cout<<"For Diesel Car:"<<endl;
        cout<<"Enter Diesel filled/used(in litres):"<<endl;
        cin>>fuel;
        cout<<"Enter Total Distance Travelled:"<<endl;
        cin>>km;
        return km/fuel;
    }
};

// Derived class: PetrolVehicles
class PetrolVehicles : public FourWheelers {
public:
    PetrolVehicles(string b, int y) : FourWheelers(b, y) {}
    float calculateMileage(){
        float km,fuel;
        cout<<"For Petrol Car:"<<endl;
        cout<<"Enter Petrol filled/used(in litres):"<<endl;
        cin>>fuel;
        cout<<"Enter Total Distance Travelled:"<<endl;
        cin>>km;
        return km/fuel;
    }
};

int main() {
    Bicycle bicycle("Brand X", 2023);
    Scooters scooter("Brand Y", 2023);
    DieselVehicles dieselCar("Brand Z", 2023);
    PetrolVehicles petrolCar("Brand W", 2023);

    float bicycleMileage = bicycle.calculateMileage();
    float scooterMileage = scooter.calculateMileage();
    float dieselCarMileage = dieselCar.calculateMileage();
    float petrolCarMileage = petrolCar.calculateMileage();

    cout << "Bicycle Mileage: " << bicycleMileage << " km/unit" << endl;
    cout << "Scooter Mileage: " << scooterMileage << " km/l" << endl;
    cout << "Diesel Car Mileage: " << dieselCarMileage << " km/l" << endl;
    cout << "Petrol Car Mileage: " << petrolCarMileage << " km/l" << endl;

    return 0;
}
