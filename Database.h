#pragma once
#include <vector>
#include <memory>
#include "Vehicle.h"

class Database {
private:
    static Database* instance;
    std::vector<std::unique_ptr<Vehicle>> vehicles;

    Database() = default; // Приватний конструктор

public:
    Database(const Database&) = delete;
    Database& operator=(const Database&) = delete;

    static Database* getInstance();
    void addVehicle(std::unique_ptr<Vehicle> vehicle);
    void printAllVehicles() const;
};