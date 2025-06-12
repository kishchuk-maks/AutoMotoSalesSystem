#pragma once
#include "Database.h"
#include <fstream>
#include <string>

class FileManager {
public:
    static void saveToFile(const std::string& filename, const Database& db);
    static void loadFromFile(const std::string& filename, Database& db);
};