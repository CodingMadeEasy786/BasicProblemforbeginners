#include <iostream>
using namespace std;
int main()
{
    int Num,Num1;
    cout<<"enter a number start";
    cin>>Num;
    cout<<"enter a number end";
    cin>>Num1;
    for(int i=Num;i<Num1;i++)
    {
        if(i%2==0)
        {
            cout<<i;
        }
    
    }
    cout<<endl;
    cout<<"odd series";
     for(int i=Num;i<Num1;i++)
    {
        if(i%2!=0)
        {
            cout<<i;
        }
    }
}