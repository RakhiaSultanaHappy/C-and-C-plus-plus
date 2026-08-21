#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key, index = -1;
    cin>>key;

    int st = 0,end = n-1, mid;
    while(st<=end)
    { 
        mid = (st+end)/2;
            
        if(key == arr[mid]){
            index = mid;
            break;
        }
         else if(key<arr[mid])
            {
                end = mid-1;
            }
        else
            {
                st = mid+1;
            }
        }
        cout<<"Index:"<<index<<endl;
      
    }
