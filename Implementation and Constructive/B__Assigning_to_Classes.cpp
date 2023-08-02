#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n=2*n;
        vector<long long>v(n,0);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        n/=2;
        cout<<v[n]-v[n-1]<<"\n";
    }
}