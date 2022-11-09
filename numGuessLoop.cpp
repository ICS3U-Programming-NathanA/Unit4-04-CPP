// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Nov 6 2022
// This program uses a break statement to
// determine if the user guessed the correct random number

#include <time.h>
#include <iostream>
#include <string>

int main() {
    // declare userNum and correctAnswer as a integer
    int userNum;
    int correctAnswer;
    // initialize random seed
    srand(time(0));
    // generate a random number between 0 and 9
    correctAnswer = rand() % 9 + 0;

    // declare userNumString as a string
    std::string userNumString;
    // Use a do while loop
    do {
        // get the users number
        std::cout << "Enter a integer: ";
        std::cin >> userNumString;

        // A try catch statement to catch
        // if the user enters a string or a decimal
        try {
            userNum = std::stoi(userNumString);
            // If statement to see if userNum is a negative
            if (userNum >= 0) {
                if (userNum >= 0 && userNum <= 9) {
                    // If statement to see if they guessed it correctly
                    if (userNum == correctAnswer) {
                        std::cout << "You guessed correctly \n";
                        break;
                    } else {
                        std::cout << "You guessed incorrectly \n";
                    }
                } else {
                    std::cout << "Please enter a number between 0 and 9 \n";
                }
            } else {
                std::cout << "Please enter a positive whole number \n";
            }
        } catch (std::invalid_argument) {
            std::cout << "Please enter a whole number\n";
        }
    } while (userNum != correctAnswer);
}
