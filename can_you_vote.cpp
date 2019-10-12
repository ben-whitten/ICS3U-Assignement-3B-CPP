// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you if your old enough to vote.

#include <iostream>
#include <cstdlib>

int main() {
    // This is what tells you how to vote.
    std::string ageAsString;
    int ageOfUser;
    const double ageToVote = 18;

    // Process
    while (true) {
        std::cout << "Input your age: ";
        std::cin >> ageAsString;
        std::cout << "" << std::endl;

        try {
            ageOfUser = std::stoi(ageAsString);

            if (ageOfUser >= ageToVote) {
            // Output
                std::cout << "You are old enough to vote." << std::endl;
                break;
            } else {
                std::cout << "You are not old enough to vote." << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid age." << std::endl;
        }
    }
}
