#include <iostream>
using namespace std;

int main() {

  int i, n,count;
  
  cout << "Enter a number: ";
  cin >> n;
  // loop to check if n is prime
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      count=count+1;
       }
  }
  if (count==2)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
