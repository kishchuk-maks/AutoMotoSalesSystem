#include <gtest/gtest.h>
#include "Car.h"
#include "Motorcycle.h"
#include "Database.h"

TEST(VehicleTest, CarDetails) {
    Car car("Toyota", "Camry", 2020, 25000, 4);
    testing::internal::CaptureStdout();
    car.printDetails();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Toyota") != std::string::npos);
}

TEST(DatabaseTest, Singleton) {
    Database* db1 = Database::getInstance();
    Database* db2 = Database::getInstance();
    ASSERT_EQ(db1, db2); // Перевірка, що це той самий екземпляр
}