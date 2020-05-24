#include <iostream>
using namespace std;

int main() {
  int x;
  
  cout << "Enter a number: ";
  cin >> x;
  if (x<0) printf (" x is negative\n");
  else if (x>0) printf (" x is positive\n");
  else printf ("Number is 0\n");
}