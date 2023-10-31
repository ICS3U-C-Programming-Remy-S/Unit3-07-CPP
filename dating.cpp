// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user
// for their age and I will tell them if
// they can date my granddaughter with a try catch

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // declare userAgeAsString
    std::string userAgeAsString;

    // get the userGuessAsString and display message
    std::cout << "This program will ask the user";
    std::cout << "for their age and I will tell them if";
    std::cout << "they can date my granddaughter";
    std::cout << "\nEnter your age: ";
    std::cin >> userAgeAsString;

    // Try catch statement
    try {
        // Convert userAgeAsString to int
        int userAgeAsInt = std::stoi(userAgeAsString);

        // When userAgeAsInt is a age that can date
        if (userAgeAsInt > 25 && userAgeAsInt < 40) {
            std::cout << "\nCongratulations you can date my granddaughter";

        } else {
            // Display that the age entered is invalid
            if (userAgeAsInt <= 0 || userAgeAsInt >= 120) {
                std::cout << "\n"
                << userAgeAsInt << " is not a valid age.";
            } else if (userAgeAsInt <= 25) {
                // Display that the age entered is too young
                std::cout << "\n"
                << userAgeAsInt << " is too young for my granddaughter.";
            } else {
                // Display that the age entered is too old
                std::cout << "\n"
                << userAgeAsInt << " is too old for my granddaughter.";
            }
        }
    } catch (std::invalid_argument) {
        // Display that the user age was not valid
        std::cout << "\n"
        << userAgeAsString << " is not a valid age.";
    }

    // finally statement
    std::cout << "\nThank you for playing my game -_-";
}
