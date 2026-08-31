#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    int A1[N];
    for(i=0; i<N; i++)
    {
        cin>>A1[i];
    }

    int M,i;
    cin>>M;
    int A2[M];
    for(i=0; i<M; i++)
    {
        cin>>A1[i];
    }

    for(i=0; i<N; i++)//loop for insertion sort
    {
        int current=A1[i], prev=i-1;
        while(prev>=0 && A1[prev]>current){
            A1[prev+1]=A1[prev];
            prev--;
        }
        A1[prev+1]=current;
    }
    for(i=0; i<N; i++)
    {
        cout<<"Using insertion sort in descending order:"<<A1[i]<<" ";
    }


    

}