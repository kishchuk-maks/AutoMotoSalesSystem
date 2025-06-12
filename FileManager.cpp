#include "FileManager.h"
#include <iostream>

void FileManager::saveToFile(const std::string& filename, const Database& db) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return;
    }
    // Тут має бути логіка серіалізації (наприклад, у JSON)
    file << "Saved data placeholder\n";
    file.close();
}

void FileManager::loadFromFile(const std::string& filename, Database& db) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return;
    }
    // Тут має бути логіка десеріалізації
    std::string line;
    while (std::getline(file, line)) {
        std::cout << "Read: " << line << std::endl;
    }
    file.close();
}