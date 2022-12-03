#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
#pragma once

class user
{
protected:
    string name;
    string phoneNumber;
    string email;
    string password;
public:
    // user();
    // ~user();
    virtual void login(string, string) = 0;
    virtual void signUp(string, string, string, string, string) = 0;
    virtual void viewInfo() = 0;
    virtual void viewPortfolio() = 0;
};

#endif