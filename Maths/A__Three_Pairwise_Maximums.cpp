#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long x,y,z;
        cin>>x>>y>>z;
        if(!((x==y and y>=z) or (x==z and z>=y) or (y==z and z>=x))){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(x==y){
            cout<<x<<" "<<z<<" "<<z<<endl;
        }else if(x==z){
            cout<<x<<" "<<y<<" "<<y<<endl;
        }else{
            cout<<x<<" "<<x<<" "<<y<<endl;
        }
    }
}