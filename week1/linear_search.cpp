
// Author : Pooja Bisht
/*
Given an array of non negative integers,design a linear algorithm and implement it using a program to find whether given key
element is present in the array or not.Also find total number of comparison for each input case.
 (time complexity =0(n),where n is the size of input).
 */


#include<bits/stdc++.h>
using namespace std;



int main()
{
    int T;
    cin>>T;
    while(T!=0){
        int N;
        cin>>N;
        vector<int>arr(N);
        for(int & i:arr)
        cin>>i;
        int key,i;
        cin>>key;
        for(i=0;i<N;i++){
            if(arr[i]==key){
                break;
            }
        }
        if(i==N){
            cout<<"Not present"<<N<<endl;
        }
        else{
            cout<<"present"<<i+1<<endl;
        }
        
        T--;
    }

return 0;
}