#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-1-i]){
                continue;
            }else{
                if(s[i]=='a'||s[n-1-i]=='a'||s[i]=='z'||s[n-1-i]=='z'){
                    if((s[i]=='a' and ('b'==char(s[n-1-i]-1)) or (s[n-1-i]=='a' and (char(s[i]-1)=='b')))){
                        continue;
                    }else if((s[i]=='z' and ('y'==char(s[n-1-i]+1))) or (s[n-1-i]=='z' and (char(s[i]+1)=='y'))){
                        continue;
                    }else{
                        f=1;
                        break;
                    }
                }else if(char(s[i]-1)==char(s[n-1-i]-1)||char(s[i]-1)==char(s[n-1-i]+1)||char(s[i]+1)==char(s[n-1-i]+1)||char(s[i]+1)==char(s[n-1-i]-1)){
                    // cout<<char(s[i]-1)<<" "<<char(s[i]+1)<<" "<<char(s[n-1-i]+1)<<" "<<char(s[n-1-i]-1)<<endl;
                    continue;
                }else {
                    f=1;
                    break;
                }
            }
        }
        if(f){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
}