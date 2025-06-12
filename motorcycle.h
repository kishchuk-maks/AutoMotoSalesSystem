#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(const std::string& brand, const std::string& model, int year, double price, bool hasSidecar);
    void printDetails() const override;
};