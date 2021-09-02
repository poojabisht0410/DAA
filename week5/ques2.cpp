// Author : Pooja Bisht 
/*
Given an unsorted array of integers, design an algorithm and implement  it using a program to 
find  whether two elements exist such that their sum is equal to thi given key element.
time complexity=0(nlogn).
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
        int key;
        cin>>key;

        sort(arr,arr+N);
        int l=0,r=N-1,f=0;
        while(l<r){
            if(arr[l]+arr[r]==key){
                cout<<arr[l]<<" "<<arr[r]<<endl;
                f=1;
                break;
            }
            else if(arr[l]+ arr[r]<key){
                l++;
            }
            else{
                r--;
            }
        }
        if(!f){
            cout<<"No such element Exist"<<endl;
        }
    }
return 0;
}