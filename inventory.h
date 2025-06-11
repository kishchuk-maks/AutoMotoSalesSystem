#pragma once
#include <vector>
#include <memory>
#include "vehicle.h"

class Inventory {
    std::vector<std::shared_ptr<Vehicle>> vehicles;

public:
    void addVehicle(std::shared_ptr<Vehicle> v);
    void displayVehicles() const;
    void searchByModel(const std::string& model) const;
    void sellVehicle(int id);
};