

#include <iostream>
// this BUggY as heLL
int main() {

  int year;

  std::cout << "*******Leap Year Determinator*******\n";
  std::cout << "******* Enter four digit year:  *******\n";
  
  std::cin >> year;
  


  
  if (year % 400 == 0) {
    std::cout << year << " is a Leap Year. \n";
  } 
  else if (year % 100 == 0) {
    std::cout << year << " is NOT a Leap Year. \n";
  }
  else if (year % 4 == 0) {
    std::cout << year << " is a Leap Year. \n";
  }
  else {
    std::cout << year << " is NOT a Leap Year. \n";
  }

}
