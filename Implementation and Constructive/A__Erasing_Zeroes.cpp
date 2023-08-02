#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        int start=0,end=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                start=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                end=i;
                break;
            }
        }
        for(int i=start;i<=end;i++){
            if(s[i]=='0'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}