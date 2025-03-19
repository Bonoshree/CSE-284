#include<iostream>
#include<string>
using namespace std;
class Car{
private:
    string car_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    // Default constructor
    Car() {
        car_name = "Audi";
        model_name = "Sedans";
        fuel_type = "petrol";
        mileage = 14;
        price = 40000;
        cout << "Default constructor has been called" << endl;
    }

    // Parameterized constructor
    Car(string cname, string mname, string ftype, float mlg, double prc) {
        car_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = mlg;
        price = prc;
    }

    // Destructor
    ~Car() {
        cout << "Destructor has been called for car: " << car_name << endl;
    }

    // Function to display the car details
    void displayData() {
        cout << "Car Name: " << car_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Default constructor
    Car car1;
    car1.displayData();  // Display details for car1 (default values)

    cout << endl;

    // Parameterized constructor
    Car car2("Toyota", "Corolla", "Petrol", 20, 30000);
    car2.displayData();  // Display details for car2 (initialized with parameters)

    return 0;
}
