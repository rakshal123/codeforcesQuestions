#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        if(x+y>n){
            cout<<y<<endl;
        }else{
            long f = floor(n/(double)x);
            long long sum = x*(f)+y;
            while(sum>n){
                f--;
                sum=x*f+y;
            }
            cout<<sum<<endl;
        }
    }
}