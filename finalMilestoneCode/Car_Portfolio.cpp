#include "Car_Portfolio.h"

Car_Portfolio::Car_Portfolio()
{
    
}

Car_Portfolio::~Car_Portfolio()
{

}

void Car_Portfolio :: addCar(string brand, string model, string caregory, string color, string plateNum, string imgpath, bool isPrim){
    car x;
    x.brand = brand;
    x.model = model;
    x.category = caregory;
    x.color = color;
    x.plateNum = plateNum;
    x.imgpath = imgpath;
    x.isPrimary = isPrim;
    cars.push_back(x);
}

void Car_Portfolio::removeCar(string Brand, string PlateNum){
    for (int i = 0; i < cars.size(); i++){
        if (cars[i].brand == Brand && cars[i].plateNum == PlateNum){
            cars.erase(cars.begin() + i);
        }
    }
}

void Car_Portfolio::editCarInfo(string Brand, string PlateNum, bool IsPrim){
    for (int i = 0; i < cars.size(); i++){
        if (cars[i].brand == Brand && cars[i].plateNum == PlateNum){
            cars[i].brand = Brand;
            cars[i].plateNum = PlateNum;
            cars[i].isPrimary = IsPrim;
        }
    }   
}
