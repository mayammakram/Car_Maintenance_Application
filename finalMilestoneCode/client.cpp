#include "client.h"

client::client(string Address, Car_Portfolio CarPortfolio)
{
    address = Address;
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