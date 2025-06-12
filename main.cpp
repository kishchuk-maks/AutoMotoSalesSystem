#include "Car.h"
#include "Motorcycle.h"
#include "Database.h"
#include "FileManager.h"

int main() {
    Database* db = Database::getInstance();

    // Додавання транспортних засобів
    db->addVehicle(std::make_unique<Car>("Toyota", "Camry", 2020, 25000, 4));
    db->addVehicle(std::make_unique<Motorcycle>("Harley", "Davidson", 2019, 15000, false));

    // Виведення всіх транспортів (поліморфізм)
    db->printAllVehicles();

    // Збереження/завантаження з файлу
    FileManager::saveToFile("vehicles.txt", *db);
    FileManager::loadFromFile("vehicles.txt", *db);

    return 0;
}