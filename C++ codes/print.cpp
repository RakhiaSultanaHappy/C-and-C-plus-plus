#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size ,top = -1, push, i, option;
    cin>>size;

    int stack[size];

    while(1)
    cout << "1 to push\n";
    cout << "2 to pop\n";
    cout << "3 to check if the stack is Empty\n";
    cout << "4 to check if the stack is Full\n";
    cout << "5 to find Size()\n";
    cout << "6 to find Top()\n";
    cout << "7 to Peek()\n";
    cout << "0 to exit\n";
     
    {
        if(option == 1)
        {
            if(top==size-1)
            {
                cout<<"The stack is full.\n";
            }
            else
            {
                cout <<"Enter the value to push: ";
                cin >> push;
                top++;
                stack[top]=push;

                cout<<"Stack: ";
                for (int i=0; i<=top; i++)
                    cout<<stack[i]<< " ";
            }
        
        }
    }
     
}
