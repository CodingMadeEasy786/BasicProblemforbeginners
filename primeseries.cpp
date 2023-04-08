#include <iostream>
using namespace std;

int main() {

  int i,n1, n2,count;
  
  cout << "Enter a number: start";
  cin >> n1;
  cout << "Enter a number: start";
  cin >> n2;
    for(int j=n1;j<n2;j++)
        {       count=0;
                // loop to check if n is prime
                for (i = 1; i <=j; i++)
                {         
                        if (j % i == 0)
                        {
                        count=count+1;
                        }
                    }
                if (count==2)
                    cout << j;
        }

  return 0;
}
