#include "inventory.h"
#include <iostream>

void Inventory::addVehicle(std::shared_ptr<Vehicle> v) {
    vehicles.push_back(v);
}

void Inventory::displayVehicles() const {
    for (const auto& v : vehicles) {
        v->display();
    }
}

void Inventory::searchByModel(const std::string& model) const {
    for (const auto& v : vehicles) {
        if (v->getModel() == model) {
            v->display();
        }
    }
}

void Inventory::sellVehicle(int id) {
    for (auto& v : vehicles) {
        if (v->getId() == id && !v->isSold()) {
            v->sell();
            std::cout << "Vehicle sold successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not found or already sold!" << std::endl;
}