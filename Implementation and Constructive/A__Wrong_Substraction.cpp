#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;int k;
    cin>>n>>k;
    while(k!=0){
        if(n%10==0){
            n=n/10;
            k--;
        }else{
            n=n-1;
            k--; 
        }
    }
    cout<<n;
}