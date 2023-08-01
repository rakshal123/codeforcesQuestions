#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    ll n;
    cin>>n;
    int count=0;
    int i=1;
    while(n>0){
        n=n-sum(i);
        if(n>=0){
            count++;
        }
        i++;
    }
    cout<<count;
}