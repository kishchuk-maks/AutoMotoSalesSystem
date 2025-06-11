#pragma once
#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string b, std::string m, int y, double p)
        : Vehicle(b, m, y, p) {}

    void display() const override {
        std::cout << "[Car] ID: " << id << ", " << brand << " " << model
                  << ", " << year << ", $" << price << ", "
                  << (sold ? "Sold" : "Available") << std::endl;
    }
};