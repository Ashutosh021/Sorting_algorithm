#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {5, 6, 1, 3, 4, 9, 2, 7, 8};
    int temp=0;
    int min;
    int j;

    for(int i=1;i<9;i++)
    {
        
        temp=arr[i];
        
        for(j=i-1;j>=0 && temp<arr[j];j--){
            arr[j+1]=arr[j];
            
        }
        arr[j+1]=temp;
    }



    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}