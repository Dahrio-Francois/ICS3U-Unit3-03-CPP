// Copyright (c) St. Mother Teresa HS All rights reserved
//
// Created by: Dahrio Francois
// Created on: December 2020
// this program makes a guessing game
//     with random numbers

#include <iostream>
#include <random>
#include <cstdlib>

int main() {
    int someRandomNumber;
    int guess;


    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 50);  // [1, 50]
    someRandomNumber = idist(rgen);

    std::cout << "Guessing Game" << std::endl;
    std::cout << "Guess a number between 1 & 50: ";
    std::cin >> guess;

    if (guess == someRandomNumber) {
    std::cout << "Correct!" << std::endl;
    } else if (guess != someRandomNumber) {
    std::cout << "Incorrect! The number was: " << std::endl;
    std::cout << someRandomNumber << std::endl;
    }
}
