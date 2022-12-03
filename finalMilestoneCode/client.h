#ifndef CLIENT_H
#define CLIENT_H
#include "user.h"
#include "Car_Portfolio.h"
#include "Car_Portfolio.cpp"  
#pragma once

class client : public user

{
private:
    Car_Portfolio carPortfolio;
    string address;
    bool loggedin;
    //bookingsAgenda bookings;
public:
    client(Car_Portfolio);
    Car_Portfolio getCarPortfolio();
    void setCarPortfolio(Car_Portfolio);
    void viewPortfolio();
    void login(string, string);
    void signUp(string, string, string, string, string);
    void viewInfo();
};

#endif