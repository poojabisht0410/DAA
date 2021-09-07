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
        int K;
        cin>>K;

        priority_queue<int> p;
        for(int i=0;i<N;i++){
            p.push(arr[i]);
            if(p.size()>K){
                p.pop();
            }
        }
        cout<<p.top()<<endl;
    }
    
return 0;
}