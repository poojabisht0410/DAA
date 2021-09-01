// Author : Pooja Bisht 
/*
Given an array of non negative integers ,design an algoritm and a program to count the number of pairs of 
integers such that their difference is equal to a given key K.
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{

    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int diff;
        cin>>diff;

        int count=0;
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(arr[j]-arr[i]==diff || arr[i]-arr[j]==diff)
                count++;
            }
        }
        cout<<count<<endl;
    }
    
return 0;
}