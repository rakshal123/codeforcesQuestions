#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        if(n==1){
            cout<<0;
        }else if(n==2){
            cout<<m;
        }else{
            cout<<(2*m)*1ll;
        }
        cout<<endl;
    }
}