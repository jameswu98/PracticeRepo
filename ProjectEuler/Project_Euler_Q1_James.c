// Project Euler Q1 in C++ by James
#include <iostream>

// Start the program
int main() {
    // Define all variables
    int x, i;
    int result;
    // Find the sum of all multiples of 3 below 1000
    for (i = 1; i <= 333; i = i + 1)
    {
        x = i * 3;
        result += x;
    }    
    // Finde the sum of all multiples of 5 below 1000, and plus it to the previous result
    for (i = 1; i <= 199; i = i + 1)
    {
        x = i * 5;
        result += x;
    }   
    // From the result, remove all numbers which are multiples of both 3 and 5 (i.e. multiples of 15) below 1000
    for (i = 1; i <= 66; i= i + 1)
    {
        x = i * 15;
        result -= x;
    }   
    // Display the result
    std::cout << result;
    // Terminate the program
    return 0;
}