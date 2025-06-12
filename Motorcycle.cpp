#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string& brand, const std::string& model, int year, double price, bool hasSidecar)
    : Vehicle(brand, model, year, price), hasSidecar(hasSidecar) {}

void Motorcycle::printDetails() const {
    Vehicle::printDetails();
    std::cout << ", Has sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
}