#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<int>pages(7,0);
    long sum=0;
    for(int i=0;i<7;i++){
        cin>>pages[i];
        sum+=pages[i];
    }
    int t=n;
    while(t>sum){
        t-=sum;
    }
    for(int i=0;i<7;i++){
        if(t>pages[i]){
            t-=pages[i];
        }else{
            cout<<i+1;
            break;
        }
    }
}