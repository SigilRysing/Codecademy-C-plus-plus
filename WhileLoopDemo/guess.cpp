#include <iostream>

int main() {

  int guess;
  
  int tries = 0;

  
 
  // Write a while loop here:
  while (tries < 3) {

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";

    std::cin >> guess;
    
    tries += 1;

    if (guess == 8) {
    
      std::cout << "You got it! 8 was my number! You win! \n";
      break;
  
    }  
  }

  if (guess != 8) {
    std::cout << "You ran out of guesses! Game over! \n";
  }

  
}
