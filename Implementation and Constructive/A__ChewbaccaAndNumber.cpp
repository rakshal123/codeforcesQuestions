#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    string s="";
    cin>>s;
    string result=s[0]=='9'?s.substr(0,1):"";
    for(ll i=result.size();i<s.size();i++){
        result+=(min(int(s[i])-48,9-(int(s[i]-48)))+48);
    }
    cout<<result;
    
}