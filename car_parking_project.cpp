#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Car{ 
    private:
    string licensePlate;
    string owner;
    public:
    Car(string lp, string o)//: licensePlate(lp), owner(o){} 
    {
        licensePlate = lp;  
        owner = o;
    } 
    void setLicensePlate(string licensePlate){
        this->licensePlate = licensePlate;
    }
    void setOwner(string owner){
        this-> owner = owner;
    }
    string getLicensePlate(){
        return licensePlate;
    }
    string getOwner(){
        return owner;
    }
    void display() const{
        cout << "License Plate : " << "Owner : " << owner << endl;
    }
};
class ParkingLot{
    private:
    vector<Car> parkedCars;
    int capacity;
    public:
    ParkingLot(int cap) : capacity(cap){}

    bool parkCar(const Car& car){
        if(parkedCars.size() < capacity){
            parkedCars.push_back(car);
            return true;
        }
        else{
            cout << "Parking lot is full!"<< endl;
            return false;
        }
    }
    void displayParkedCars(){
        cout << "Parked Cars\n" << endl;
        for(const auto& car : parkedCars){
            car.display();
        }
    }
};
class Employee{
    private:
    string name;
    int id;

    public:
    Employee(string n, int i) : name(n), id(i) {}

    void setName(string name) {
        this->name = name;
    }

    void setId(int id) {
        this->id = id;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    void display() const {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

class Billing {
private:
    int hoursParked;
    double ratePerHour;

public:
    Billing(int hours, double rate) : hoursParked(hours), ratePerHour(rate) {}

    double calculateBill() const {
        return hoursParked * ratePerHour;
    }

    void displayBill() const {
        cout << "Total Bill: Rs " << calculateBill() << endl;
    }
};

int main(){
    ParkingLot myParkingLot(3);
    Car car1("BC123" , "Sanjay gore");
    Car car2("YZ457" , "Janvi manse");
    Car car3("MN423", "Aliya kapse");
    Car car4("QR6124", "meena sharma");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4);
    myParkingLot.displayParkedCars();
    
    Employee employee1("Riya Warikoo", 93);
    Employee employee2("Lakshiyta Bhatti", 106);

    employee1.display();
    employee2.display();

    Billing bill1(5, 50);
    Billing bill2(3, 25);

    bill1.displayBill();
    bill2.displayBill();
    return 0;
}
/*

Car Class: Defines a car with a license plate and owner. 
It includes a constructor to initialize these attributes and a method 
to display car information.

ParkingLot Class: Manages a collection of cars using a std::vector 
and has a capacity limit. It provides methods to park a car and display
all parked cars.

Main Function: Creates instances of Car, attempts to park them in an instance
of ParkingLot, and then displays the parked cars.

*/

