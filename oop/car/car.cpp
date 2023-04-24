#include "car.h"
#include <iostream>

Car::Car()
{
    std::cout << "Car()" << std::endl;

    fuel = 0;
    speed = 0;
    passengers = 0;
}

Car::~Car()
{
    std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate()
{
    speed++;
}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers(int count)
{
    passengers = count;
}

void Car::Dashboard()
{
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Passengers: " << passengers << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
}
