// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <random>
#include <ctime>

const int ARRAYSIZE = 10;

int main() {
    // I calculate the average of randomely generated numbers
    float randomNumbers[ARRAYSIZE];
    float randNum;
    double average;

    srand(time(NULL));

    // process & output
    std::cout << "Random numbers are: ";
    for (int counter1 = 0; counter1 < ARRAYSIZE; counter1++) {
        randNum = static_cast <double> (
            rand()) / (static_cast <double> (RAND_MAX/100));
        randomNumbers[counter1] = randNum;

        // format and display random numbers
        std::cout.precision(4);
        if (counter1 != 0) {
            std::cout << ", ";
        }
        std::cout << randNum;
    }
    std::cout << std::endl;

    // format and display output
    for (int counter2 = 0; counter2 < ARRAYSIZE; counter2++) {
        average = average + randomNumbers[counter2];
    }
    average = average / ARRAYSIZE;
    std::cout << "\nThe average is " << average << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
