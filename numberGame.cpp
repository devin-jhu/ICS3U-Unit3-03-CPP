// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The number game

#include <iostream>
#include <random>


int main() {
    // this function is a guessing game
    int guess;
    int numberAnswer;

    std::random_device rseed;
    // mersenne_twister
    std::mt19937 rgen(rseed());
    // random number between [1,9]
    std::uniform_int_distribution <int> idist(1 , 9);
    numberAnswer = idist(rgen);

    std::cout << "The number game";
    std::cout << "" << std::endl;
    std::cout << "Guess a number between 1 and 9";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> guess;

    // process
    if (guess == numberAnswer) {
        std::cout << "You win!";
    } else {
        std::cout << "You lose :(";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
