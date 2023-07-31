#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin>>t;
    ll count=0;
    while(t--){
        string s;
        cin>>s;
        if(s.substr(0,2)=="++" || s.substr(1,3)=="++"){
            count++;
        }else{
            count--;
        }
    }
    cout<<count;
}