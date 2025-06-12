#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std::string& brand, const std::string& model, int year, double price, int doors);
    void printDetails() const override; // Перевизначення методу
};