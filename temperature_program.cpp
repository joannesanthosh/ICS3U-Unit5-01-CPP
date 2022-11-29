// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program converts celsius to fahrenheit

#include <iostream>
#include <string>

std::string(celsius);
float celsiusTemp;
float fahrenheitTemp;

void fahrenheit() {
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsius;

    std::cout << "\n";
    try {
        celsiusTemp = std::stof(celsius);
        fahrenheitTemp = 9.0 / 5.0 * celsiusTemp + 32;
        std::cout << celsiusTemp << "°C is equal to "
                  << fahrenheitTemp << "°F.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}

int main() {
    fahrenheit();
}
