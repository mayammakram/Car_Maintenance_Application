#include <iostream>
#include "Car_Portfolio.h"
#include "Car_Portfolio.cpp"
#include "client.h"
#include "client.cpp"
using namespace std;



int main(){
    Car_Portfolio x;
    x.addCar("Toyota", "Camry", "Sedan", "Black", "1234", "mins", true);
    cout << ("car added");
    x.printCars();
}