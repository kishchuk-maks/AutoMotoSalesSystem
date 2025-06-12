#include "Database.h"

Database* Database::instance = nullptr;

Database* Database::getInstance() {
    if (!instance) {
        instance = new Database();
    }
    return instance;
}

void Database::addVehicle(std::unique_ptr<Vehicle> vehicle) {
    vehicles.push_back(std::move(vehicle));
}

void Database::printAllVehicles() const {
    for (const auto& vehicle : vehicles) {
        vehicle->printDetails(); // Поліморфізм!
    }
}