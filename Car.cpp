#include "Car.h"

Car::Car(const std::string& brand, const std::string& model, int year, double price, int doors)
    : Vehicle(brand, model, year, price), doors(doors) {}

void Car::printDetails() const {
    Vehicle::printDetails();
    std::cout << ", Doors: " << doors << std::endl;
}