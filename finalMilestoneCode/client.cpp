#include "client.h"

client::client(Car_Portfolio CarPortfolio)
{
    address = "";
    carPortfolio = CarPortfolio;
}

void client::viewPortfolio()
{
    carPortfolio.printCars();
}

Car_Portfolio client::getCarPortfolio()
{
    return carPortfolio;
}

void client::setCarPortfolio(Car_Portfolio CarPortfolio)
{
    carPortfolio = CarPortfolio;
}

void client::login(string Email, string Password)
{   
    while (true){
        if (Email == email && Password == password)
        {
            cout << "Login Successful" << endl;
            loggedin = true;
            break;
        }
        else
        {
            cout << "Login Failed" << endl;
        }
    }
}

void client::signUp(string Name, string PhoneNumber, string Email, string Password, string Address)
{
    name = Name;
    phoneNumber = PhoneNumber;
    email = Email;
    password = Password;
    address = Address;
    loggedin = true;
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