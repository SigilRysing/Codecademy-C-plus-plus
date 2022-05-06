#include <iostream>

int main() {
  // Add your code below  
  double earthWeight;
  double marsWeight;
  std::cout << "Item weight on Earth: \n";
  std::cin >> earthWeight;
  marsWeight = (earthWeight * .38);
  std::cout << "Item weighs " << marsWeight << " on Mars.\n";
}
