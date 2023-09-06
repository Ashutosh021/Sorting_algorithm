#include <iostream>
using namespace std;
#define MAX 4
int top = -1;
int arr[MAX];


bool isfull()
{
    int m = MAX - 1;
    if (m == top)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int item)
{
    if (isfull())
    {
        cout << "\nOverflow";
    }
    else
    {
        top = top + 1;
        arr[top] = item;
    }
}

int pop()
{
    if (isEmpty())
    {
        cout << "\nUnderFlow";
        return 0;
    }
    else
    {
        int temp = arr[top];
        top--;
        return temp;
    }
}

int peek()
{
    return arr[top];
}


void display()
{
    cout << "\nStack is :- ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int choice = 0;
    while (1)
    {
        cout << "\n1.Push ";
        cout << "\n2.pop ";
        cout << "\n3.peek";
        cout << "\n4.display ";
        cout << "\n5.Exit";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int item;
            cout << "\nEnter item to be push\n";
            cin>>item;
            push(item);
            break;
        case 2:
            cout << "\ntem pooped :- " << pop();
            break;
        case 3:
            cout << "\nPeek :- " << peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);

        default:
            cout<<"\nWrong Choice";
            break;
        }
    }
}