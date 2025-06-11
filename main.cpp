#include <iostream>
#include <vector>
#include <memory>
#include "vehicle.h"
#include "car.h"
#include "motorcycle.h"
#include "inventory.h"

int main() {
    Inventory inventory;

    int choice;
    do {
        std::cout << "\n=== Auto Moto Dealership ===\n";
        std::cout << "1. Add Car\n";
        std::cout << "2. Add Motorcycle\n";
        std::cout << "3. Show All Vehicles\n";
        std::cout << "4. Search by Model\n";
        std::cout << "5. Sell Vehicle\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string brand, model;
            int year;
            double price;
            std::cout << "Brand: "; getline(std::cin, brand);
            std::cout << "Model: "; getline(std::cin, model);
            std::cout << "Year: "; std::cin >> year;
            std::cout << "Price: "; std::cin >> price;
            inventory.addVehicle(std::make_shared<Car>(brand, model, year, price));
        } else if (choice == 2) {
            std::string brand, model;
            int year;
            double price;
            std::cout << "Brand: "; getline(std::cin, brand);
            std::cout << "Model: "; getline(std::cin, model);
            std::cout << "Year: "; std::cin >> year;
            std::cout << "Price: "; std::cin >> price;
            inventory.addVehicle(std::make_shared<Motorcycle>(brand, model, year, price));
        } else if (choice == 3) {
            inventory.displayVehicles();
        } else if (choice == 4) {
            std::string model;
            std::cout << "Enter model to search: ";
            std::cin.ignore();
            getline(std::cin, model);
            inventory.searchByModel(model);
        } else if (choice == 5) {
            int id;
            std::cout << "Enter vehicle ID to sell: ";
            std::cin >> id;
            inventory.sellVehicle(id);
        }
    } while (choice != 0);

    return 0;
}