#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        int u=n%10;
        while(n!=0){
            c++;
            n=n/10;
        }
        int sum = (c*(c+1))/2;
        cout<<((u-1)*10)+sum<<"\n";
    }
}