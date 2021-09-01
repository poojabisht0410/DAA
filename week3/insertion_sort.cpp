// Author : Pooja Bisht 
/*
Given an unsorted array of integers ,design an algorithm and a program  to sort the array using insertion sort.
your program should be able to find the number of comparison and shifts  required for sorting the array.
*/


#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[],int N){
    int comp=0;
    for(int i=1;i<N;i++){
        int key=arr[i];
        int j=i-1;

        while(arr[j]>key && j>=0){
            comp++;
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return comp;
}

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
        int comp=insertion_sort(arr,N);
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparison="<<comp<<endl;
        cout<<"shifts="<<comp+N-1<<endl;
    }
    
return 0;
}