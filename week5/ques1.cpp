// Author : Pooja Bisht
/*
Given an unsorted array of alphabets containing duplicate elements.Design an algorithm and implement it using
a program to find which alphabet has maximum number of occurence and print it.
time complexity=0(n).
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
        char ch[N];

        for(int i=0;i<N;i++){
            cin>>ch[i];
        }

        int count[26]={0};
        for(int i=0;i<N;i++){
            count[(int)ch[i]-97]+=1;
        }
        int max=1;
        char c='a';
        for(int i=0;i<26;i++){
            if(max<count[i]){
                max=count[i];
                c=i+97;
            }
        }
        if(max>1)
        cout<<c<<"-"<<max;
        else
        cout<<"No Duplicates Present";
        cout<<endl;    
    }
    
return 0;
}