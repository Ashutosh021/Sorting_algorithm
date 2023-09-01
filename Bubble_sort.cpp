#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int flag;

    for (int i = 0; i < n; i++)
    {
        flag=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag++;
            }
        }
        if(flag==0){
            break;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}