#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string on_table;
    cin>>on_table;
    vector<string>v(5,"");
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int f=0;
    for(string s:v){
        if(s[0]==on_table[0] or s[1]==on_table[1]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}