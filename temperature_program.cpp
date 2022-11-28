// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program converts celsius to fahrenheit

#include <iostream>

// note: the style for the function name is following Google's style guide
//       https://google.github.io/styleguide/cppguide.html#Function_Names
void fahrenheit() {
    // calculate area

    int temp_celsius;
    int temp_fahrenheit;

    // input
    std::cout << "Enter the temperature in celsius degrees: ";
    std::cin >> temp_celsius;

    // process
    temp_fahrenheit = (9 / 5) * temp_celsius + 32;

    // output
    std::cout << "The temperature is " << temp_fahrenheit << "degrees fahrenheit"
              << std::endl;
}

main() {
    // call functions
    fahrenheit();
}
