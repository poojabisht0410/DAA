// Author : Pooja Bisht 
/*
You have been given two sorted integers array of size m and n.Design an algorithm and
implement it using a program to find list of elements which are common to both.
Timr complexity=0(m+n).
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int N;
    cin>>N;

    int a1[N];
    for(int i=0;i<N;i++){
        cin>>a1[i];
    }
    int M;
    cin>>M;
    int a2[M];
    for(int i=0;i<M;i++){
        cin>>a2[i];
    }

    int i=0,j=0;
    sort(a1,a1+N);
    sort(a2,a2+M);

    while(i!=N && j!=M){
        if(a1[i]==a2[j]){
            cout<<a1[i]<<" ";
            i++;
            j++;
        }

        else if(a1[i]<a2[j]){
            i++;
        }
        else{
            j++;
        }
    }
return 0;
}