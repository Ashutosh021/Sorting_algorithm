#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9]={5,6,1,3,4,9,2,7,8};
    int min;

    for(int i=0;i<9;i++)
    {
        min=i;
        for(int j=i+1;j<9;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}