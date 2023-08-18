#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        cout<<long(ceil((n*m)/2.0))<<endl;
    }
}