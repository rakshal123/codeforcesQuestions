#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=-1,even=-1;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(odd!=-1 and even!=-1){
                break;
            }
            if(v[i]%2){
                odd=v[i];
            }else{
                even=v[i];
            }
        }
        // cout<<odd<<" "<<even<<endl;
        if(n%2){
            if(odd!=-1){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else{
            if(odd!=-1 and even!=-1){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }
        cout<<endl;
    }
}