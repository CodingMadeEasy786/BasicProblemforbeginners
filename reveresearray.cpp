#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
        int arrSize = sizeof(arr)/sizeof(arr[0]);
    //size of arr gives 20 because it counts in date type size. so divide it be same data type gives exact size.
    int temp=0,size=arrSize;

    for(int i=0;i<arrSize;i++)
    {  
         temp=arr[i];
        arr[i]=arr[size];
        arr[size]=temp;
        size--;
        
    }
    while(arrSize--)
    {
        cout<<arr[arrSize];
    }
   
}
    