// Author : Pooja Bisht
/*
Given an unsorted array of integers ,design an algorithm  and implement a program to sort this array using selection sort.
your program should also find the number of comparison and number of swaps required.
*/


#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int N){
    int swap=0,comp=0;

    for(int i=0;i<N-1;i++){
        int min=i;

        for(int j=i+1;j<N;j++){
            comp++;
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        swap++;
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparison="<<comp<<endl;
    cout<<"swap="<<swap<<endl;
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

        selection_sort(arr,N);
    }
return 0;
}