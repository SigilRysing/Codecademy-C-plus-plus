#include <iostream>
#include <vector>

int main() {

  std::vector<int> oddAndEven = {2, 4, 3, 6, 1, 9};

  int odd = 1;
  int even = 0;

  for (int i = 0; i < oddAndEven.size(); i++) {
    if (oddAndEven[i] % 2 == 0) {
      even += oddAndEven[i];
    }
    else if (oddAndEven[i] % 2 != 0) {
      odd *= oddAndEven[i];
    }
  }

  std::cout << "Sum of even numbers is " << even << "\n";
  std::cout << "Product of odd numbers is " << odd << "\n";

}


