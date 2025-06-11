#pragma once
#include "vehicle.h"

class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string b, std::string m, int y, double p)
        : Vehicle(b, m, y, p) {}

    void display() const override {
        std::cout << "[Motorcycle] ID: " << id << ", " << brand << " " << model
                  << ", " << year << ", $" << price << ", "
                  << (sold ? "Sold" : "Available") << std::endl;
    }
};