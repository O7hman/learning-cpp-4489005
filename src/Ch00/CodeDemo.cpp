// Learning C++
// Exercise 00_03
// Using the exercise files on GitHub, by Eduardo Corpeño

#include <cstdint>
#include <iostream>
#include "car.h"

int main()
{
    car myCar("dev", 100000, bmw);

    std::cout << "My " << myCar.get_name() << " car is " << myCar.get_m() << " with a mileage of " << myCar.get_mileage() << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;

    myCar.set_m(audi);

    std::cout << "New make is " << myCar.get_m() << std::endl;
    return (0);
}