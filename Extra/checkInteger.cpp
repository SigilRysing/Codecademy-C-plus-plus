// https://www.codespeedy.com/check-if-input-is-an-integer-in-cpp/
// below f() iterates through str & checks if each is int

#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int i,count;
   string checkint;
  cout<<"Enter a number : ";
  cin>>checkint;
       
  for (i = 0; i < checkint.length(); i++) 
{
        if (isdigit(checkint[i]) == false) 
  {
  count=1;
  break;
  }
  else
  count=0;
     
 } if(count==0)
        cout << "Integer"; 
  
      else
        cout << "Not Integer"; 
}
