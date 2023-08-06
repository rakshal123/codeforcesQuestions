#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v(n,0);
    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    int x=1;
    int f=0;
    int i=1;
    while(i<n){
        // cout<<x<<" "<<v[i]<<endl;
        x=x+v[i];
        if(x==t){
           f=1;
           break; 
        }
        i=x;
    }
    if(f==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}