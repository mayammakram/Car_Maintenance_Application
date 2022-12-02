#include <iostream>
#include <vector>
using namespace std;

#ifndef CAR_PORTFOLIO_H
#define CAR_PORTFOLIO_H

#pragma once

struct car{

    string brand;
    string model;
    string category;
    string color;
    string plateNum;
    string imgpath;
    bool isPrimary;
    
};

class Car_Portfolio
{

private:
    vector <car> cars;
    int primaryCar;

public:
    Car_Portfolio();
    ~Car_Portfolio();
    void addCar(string, string, string, string, string, string, bool);
    void removeCar(string, string);
    void editCarInfo(string, string, bool);
};

#endif