// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program determines whether the employee is able to get the bonus or not

#include <iostream>
#include <string>

    // constants
    const int BONUS_YEAR = 5;

int main() {
    // variables
    std::string salary;
    std::string years_of_service;
    int integerAsNumber1;
    int integerAsNumber2;

    // input
    std::cout << "Please enter your yearly salary: $";
    std::cin >> salary;
    std::cout << "Please enter the number of years of your service: ";
    std::cin >> years_of_service;
    std::cout << "" << std::endl;

    // process / output
    // try catch statement
    try {
        integerAsNumber1 = std::stoi(salary);
        integerAsNumber2 = std::stoi(years_of_service);

        if (integerAsNumber2 >= BONUS_YEAR) {
            std::cout << "Your new net salary is $" <<
            integerAsNumber1 * 1.05 << std::endl;
        }  else {
            std::cout << "Sorry, you are unable to get the 5% due to "
                     "years of service.\n";
            }
    }
    catch (std::invalid_argument) {
        std::cout << "Invalid entry. Please try again";
    }
    // default message
    std::cout << "" << std::endl;
    std::cout << "Thanks for using my program" << std::endl;
}
