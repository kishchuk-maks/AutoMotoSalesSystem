#include "Vehicle.h"

Vehicle::Vehicle(const std::string& brand, const std::string& model, int year, double price)
    : brand(brand), model(model), year(year), price(price) {}

void Vehicle::printDetails() const {
    std::cout << "Brand: " << brand << ", Model: " << model 
              << ", Year: " << year << ", Price: $" << price;
}

// Гетери
std::string Vehicle::getBrand() const { return brand; }
std::string Vehicle::getModel() const { return model; }
int Vehicle::getYear() const { return year; }
double Vehicle::getPrice() const { return price; }