#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c_1=0;
        int c_0=0;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]=v[i]%2;
            c_1+=(v[i]==1);
            c_0+=(v[i]==0);
        }
        // for(auto i : v){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // cout<<c_1<<" "<<c_0<<endl;
        if(!((n%2==0 and c_1==c_0) or (n%2==1 and c_0==(c_1+1)))){
            cout<<-1<<endl;
            continue;
        }
        int c=0;
        for(int i=0;i<n;i++){
            if((i%2==0 and v[i]!=0) or (i%2==1 and v[i]!=1)){
                c++;
            }
        }
        cout<<c/2<<endl;
    }
}