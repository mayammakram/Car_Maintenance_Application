#include "client.h"

client::client(Car_Portfolio CarPortfolio)
{
    address = "";
    loggedin = false;
    carPortfolio = CarPortfolio;
}

void client::viewPortfolio(){carPortfolio.printCars();}

Car_Portfolio client::getCarPortfolio(){return carPortfolio;}

void client::setCarPortfolio(Car_Portfolio CarPortfolio)
{
    if(loggedin){
        carPortfolio = CarPortfolio;}
    else{
        cout << "Please Login First"<<endl;}
}

void client::login(string Email, string Password)
{   int i = 3;
    while (i > 0){
        if (Email == email && Password == password){
            cout << "Login Successful" << endl;
            loggedin = true;
            break;
        }
        else{
            cout << "Login Failed" << endl; i = i - 1;}
    }
    if ( i == 0){cout << "You have exceeded the number of attempts" << endl;}
}

void client::signUp(string Name, string PhoneNumber, string Email, string Password, string Address)
{
    name = Name;
    phoneNumber = PhoneNumber;
    email = Email;
    password = Password;
    address = Address;
    cout << "Sign Up Successful" << endl;
}

void client::viewInfo()
{
    if (loggedin)
    {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
        cout << "Address: " << address << endl;
    }
    else
    {
        cout << "Please Login First" << endl;
    }
}