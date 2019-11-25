// Copyright (c) Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program calculates the volume of a cylinder

#include <iostream>
#include <cmath>
#include <string>

float CalculateVolume(int height, int radius) {
    float volume;

    // This function calculates the volume of the cylinder when called
    volume = M_PI*pow(radius, 2)*height;

    return volume;
}


main() {
    // variables
    std::string heightString;
    std::string radiusString;
    int radiusFromUser;
    int heightFromUser;
    float calculatedVolume;

    std::cout << "Welcome to the cylinder volume calculator." << std::endl;
    std::cout << std::endl;
    // input
    std::cout << "Enter the height (cm): ";
    std::cin >> heightString;
    try {
        heightFromUser = std::stoi(heightString);
        std::cout << "Enter the radius (cm): ";
        std::cin >> radiusString;
        try {
        radiusFromUser = std::stoi(radiusString);
        // call function
        calculatedVolume = CalculateVolume(heightFromUser, radiusFromUser);
        // output
        std::cout << std::endl;
        std::cout << "The volume of the cylinder is " <<
                     calculatedVolume << "cm^3." << std::endl;
        } catch (std::invalid_argument) {
            std::cout << "Integers only. Please try again." << std::endl; }
    } catch (std::invalid_argument) {
        std::cout << "Integers only. Please try again." << std::endl; }
}
