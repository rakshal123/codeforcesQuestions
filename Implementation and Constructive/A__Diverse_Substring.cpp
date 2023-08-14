#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result="";
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            result=s.substr(i,2);
            break;
        }
    }
    if(result.size()==0){
        cout<<"NO";
    }else{
        cout<<"YES"<<"\n"<<result;
    }
}