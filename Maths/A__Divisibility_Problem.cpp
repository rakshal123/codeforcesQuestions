#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        if(a<=b){
            cout<<(b-a)<<endl;
            continue;
        }
        long i=a/b;
        long ans = a%b==0?0:(i+1)*b-a;
        cout<<ans<<endl;
    }
}