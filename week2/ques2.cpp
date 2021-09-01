// Author : Pooja Bisht
/*
Given an sorted array of positive integers ,design an algorithm and implement it using a program to find
three indices i,j,k such that arr[i]+arr[j]=arr[k].
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
        vector<int> arr(N);
        for(int &i:arr)
        cin>>i;
        int flag=0;
        int i,j,k;
        for( i=0;i<N-2;i++){
            for( j=i+1;j<N-1;j++){
                for( k=j+1;k<N;k++){
                    if(arr[i] + arr[j]==arr[k]){
                        flag=1;
                        break;
                    }
                }
                if(flag)
                break;
            }
            if(flag)
            break;
        }
        if(flag)
        cout<<i+1<<","<<j+1<<","<<k+1<<endl;
        else
        cout<<"No sequence found"<<endl;
    }
return 0;
}