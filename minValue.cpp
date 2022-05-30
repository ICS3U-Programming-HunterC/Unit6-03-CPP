// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 29, 2022
// This program generates 10 random numbers between 1 and 100 and
// displays them to the user and then finds the minimum number

#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include <array>
#include <random>

// declare constants
const int MAX_SIZE = 10;
const int MAX_NUM = 100;
const int MIN_NUM = 0;

template<size_t N>
int GetMinValue(std::array<int, N> arrayOfNum) {
    // declare variable
    int minValue = 101;

    // get the max number
    for (int aNum : arrayOfNum) {
        if (minValue > aNum) {
            minValue = aNum;
        }
    }

    // return the minimum value
    return minValue;
}


main() {
    // declare variables
    int randomInt;
    int counter;
    int minValue;

    // declare array
    std::array<int, MAX_SIZE> arrayOfNum;

    srand(time(NULL));

    // generate the random numbers
    for (counter = 0; counter < MAX_SIZE; counter ++) {
        // generate random number
        randomInt = (rand() % MAX_NUM + 1) + MIN_NUM;

        // assign the random number to the array
        arrayOfNum[counter] = randomInt;

        // display the random number
        std::cout << arrayOfNum[counter] << " added to the list at position "
<< counter << "\n";
    }
    // call function
    minValue = GetMinValue(arrayOfNum);

    // display the minimum number
    std::cout << "\n";
    std::cout << "The minimum value is: " << minValue;
}
