// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program checks if someone is eligible to date my grandchild

#include <iostream>
#include <random>

int main() {
    // This function checks if someone is eligible to date my grandchild
    int wealth;
    int appearance;

    // Input
    std::cout << "So, you want to date my grandchild," << std::endl;
    std::cout << "" << std::endl;
    std::cout << "What is your net worth? $";
    std::cin >> wealth;
    std::cout << "" << std::endl;
    std::cout << "On a scale from 1 - 10, how attractive are you? ";
    std::cin >> appearance;
    std::cout << "" << std::endl;

    // Process
    if (wealth >= 2250000 || appearance >= 7) {
        // Output
        std::cout << "Great! You are free to date my grandchild!" << std::endl;
    } else {
        std::cout << "I am so sorry, but I can’t allow you to "
                  << "date my grandchild!" << std::endl;
    }
}
