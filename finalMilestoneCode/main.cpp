#include <iostream>
#include "client.h"
#include "client.cpp"
using namespace std;



int main(){
    Car_Portfolio portfolio;
    client x("1234", portfolio);
    portfolio.addCar("Toyota", "Camry", "Sedan", "Black", "1234", "C:\\Users\\user\\Desktop\\car.jpg", true);
    portfolio.addCar("bmw", "x5", "SUV", "White", "5678", "C:\\Users\\user\\Desktop\\car.jpg", false);
    x.setCarPortfolio(portfolio);
    x.viewPortfolio();
}