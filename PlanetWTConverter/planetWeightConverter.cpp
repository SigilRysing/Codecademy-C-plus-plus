#include <iostream>

int main() {
  
  int earthWT;
  int planet;
  double answer;
  
  std::cout << "Enter current Earth weight: \n";
  std::cin >> earthWT;

  std::cout << "Enter Number of Planet you want to fight on: \n";

  std::cout << "1 - Mercury \n";
  std::cout << "2 - Venus \n";
  std::cout << "3 - Mars \n";
  std::cout << "4 - Jupiter \n";
  std::cout << "5 - Saturn \n";
  std::cout << "6 - Uranus \n";
  std::cout << "7 - Neptune \n";

  std::cin >> planet;

  switch(planet) {
    case 1 : 
      answer = earthWT * 0.38;
      break;
    case 2 : 
      answer = earthWT * 0.91;
      break;
    case 3 : 
      answer = earthWT * 0.38;
      break;
    case 4 : 
      answer = earthWT * 2.34;
      break;
    case 5 : 
      answer = earthWT * 1.06;
      break;
    case 6 : 
      answer = earthWT * 0.92;
      break;
    case 7 : 
      answer = earthWT * 1.19;
      break;

  }
  

  std::cout << "Your weight on that planet will be " << answer << " pounds. \n";
  
  
  
}
