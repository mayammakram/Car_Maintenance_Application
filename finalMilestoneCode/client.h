#ifndef CLIENT_H
#define CLIENT_H
#include "Car_Portfolio.h"
#include "Car_Portfolio.cpp"  
#pragma once

class client
{
private:
    Car_Portfolio carPortfolio;
    string address;
    //bookingsAgenda bookings;
public:
    client(string, Car_Portfolio);
    Car_Portfolio getCarPortfolio();
    void setCarPortfolio(Car_Portfolio);
    void viewPortfolio();
};

#endif