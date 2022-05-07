#include <iostream>
// C++ equiv of Python type(var)?
int main() {

  int guess;
  
  int tries = 0;

  // Write a while loop here:
  while (tries < 50) {
    if (guess == 8) {
      std::cout << "You guessed it! The number is 8! You win! \n";
      break;
    }
    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;
    count += 1;
  }
  
  
  
  
  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  
  
}
