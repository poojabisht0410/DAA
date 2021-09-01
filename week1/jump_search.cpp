// Author : Pooja Bisht

/*
Given an already sorted array of postive integers , design an algorithm and implelement it using a program to find
whether a given key element is present in the sorted  array or not. For an array arr[n],search at the indexes 
arr[0],arr[2],arr[4].......arr[n]and so on.Once the interval(arr[2^k]<key<arr[2^k-1])is found,perform a linear search
opeartion from the index 2^k to find the element key.(complexity<0(n),where n is the number of elemnt need to be scanned 
for searching).

*/

#include<bits/stdc++.h>
using namespace std;

int jump_search(int *a,int N,int key){
    int i=0,j=2;
    int comp=0;

    while(comp++ && a[j]<=key && j<N){
        if(a[j]==key){
            cout<<"Present";
            return j;
        }
        i=j;
        j*=2;
        if(j>=N){
            j=N-1;
        }
    }

    for(int k=i;k<=j;k++,comp++){
        if(a[k]==key){
            cout<<"present";
            return j;
        }
    }
    cout<<"Not present";
    return comp;
    
}

int main()
{

    int T;
    cin>>T;

    while(T){
        int N;
        cin>>N;
        int *a=new int[N];

        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int key;
        cin>>key;
        cout<<jump_search(a,N,key)<<endl;
        T--;
    }
    
return 0;
}