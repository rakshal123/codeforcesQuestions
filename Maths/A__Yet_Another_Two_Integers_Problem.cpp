#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        long ans = abs(b-a)%10==0?abs(b-a)/10:abs(b-a)/10+1;
        cout<<ans<<"\n";
    }
}