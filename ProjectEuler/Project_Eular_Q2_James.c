// Project Euler Q2 in C++ by James
#include <iostream>
#include <string>
// Start the program
int main()
{
    // Define the variables
  int a, b, feb, result;
    // start a for loop (which I love a lot)
  for (feb = 0; feb <= 4000000; feb += 0)
  {
      // Define a and b
      a = 1; b = 1;
      // Let the next feb number be the sum of a and b
      feb = a + b;
      // let the new a become b
      a = b;
      // Let the new b become the feb number
      b = feb;
      // Test if the feb number is even
      if (feb % 2 == 0)
      {
          // If even, add it to the result
          result += feb;
      }
      // else do nothing
      else{}
  }
    // display the result
  std::cout << result;
}
