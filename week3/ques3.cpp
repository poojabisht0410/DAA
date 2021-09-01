// Author : Pooja Bisht
/*
Given an unsorted array of positive integers,design an algorithm and implement it using a program to _find 
whether there are any duplicate elements in the array or not using sorting.
(time complexity =0(nlogn)),
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

        sort(arr,arr+N);
        int found=0;
        for(int i=0;i<N-1;i++){
            if(arr[i]==arr[i+1]){
                found=1;
                break;
            }
           
        }
        if(found)
        cout<<"yes";
        else
        cout<<"no";
        cout<<endl;
    }
return 0;
}