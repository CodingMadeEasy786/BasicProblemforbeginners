#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,0};
    int high=arr[0];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    //size of arr gives 20 because it counts in date type size. so divide it be same data type gives exact size.
    for(int i=0;i<arrSize;i++)
    {
       if(high>arr[i])
       {
        high=arr[i];
       }

    }
    cout<<high;
}
    