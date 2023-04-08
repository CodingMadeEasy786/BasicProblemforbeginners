#include <iostream>
using namespace std;
int main()
{
    int Num,Num1,num;
    cout<<"enter a number start";
    cin>>Num;
    cout<<"enter a number end";
    cin>>Num1;
    int rev,temp,n;
    for(int i=Num;i<Num1;i++)
    {
            temp=0;
            rev=0;
            n=i;
            num=i;
            
            while(num>0)
            {
                temp = num % 10;//gives last digit
                rev = (rev * 10) + temp;//adding the last digit to first position  
                num = num / 10;//removes the last digit
            }
            
            if(n==rev)
            {
                cout<<n;
            }
    }
    
}