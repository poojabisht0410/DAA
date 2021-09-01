// Author : Pooja Bisht
/*
Given an already sorted array of non negative integers,design an algorithm and implement it using a program to find whether given key
element is present in the array or not.Also find total number of comparison for each input case.
 (time complexity =0(nlogn),where n is the size of input).
 */
 

#include<bits/stdc++.h>
using namespace std;
void binary_search(vector<int> &arr,int n,int key){
    int l=0,r=n-1,comp=0;

    while(l<=r){
        int mid=(l+r)/2;
        if(key==arr[mid]){
    
            break;
           
        }
        else if(key<arr[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        comp++;
    }
    if(l>r){
        cout<<"Not present"<<endl;

    }
    else{
       cout<<"present"<<comp +1<<endl;
    }
}


int main()
{
    int T;
    cin>>T;

    while(T--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int &i:arr){
            cin>>i;
        }
        int key;
        cin>>key;
        binary_search(arr,n,key);
    }
return 0;
}