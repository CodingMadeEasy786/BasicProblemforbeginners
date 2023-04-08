#include <iostream>
using namespace std;
int main()
{
    int Num;
    cout<<"enter a number start";
    cin>>Num;
    int rev,temp,n;
    n=Num;
    while(Num>0)
    {
         temp = Num % 10;//gives last digit
         rev = (rev * 10) + temp;//adding the last digit to first position  
         Num = Num / 10;//removes the last digit
    }
    if(n==rev)
    {
        cout<<"yup!";
    }
    else{
        cout<<"nope!";
    }
    
}