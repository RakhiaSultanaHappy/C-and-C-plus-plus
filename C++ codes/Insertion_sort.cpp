#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int i;
for( i=0; i<n; i++)
{
    cin>>arr[i];

}

for( i=0; i<n; i++){
int current=i, prev=i-1;
while(prev>0 && arr[prev]>current){
    arr[prev+1] == arr[prev];
    prev--;
    break;
  }
}

for( i=0; i<n; i++)
cout<<arr[i]<<" ";
}

