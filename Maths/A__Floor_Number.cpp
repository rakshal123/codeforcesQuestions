#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1 and x==1){
            cout<<1<<endl;
            continue;
        }
        cout<<(int(ceil((n-2)/double(x)))+1)<<endl;
    }
}