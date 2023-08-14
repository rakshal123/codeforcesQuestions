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
        if(find(s.begin(),s.end(),'1')==s.end()){
            cout<<n<<endl;
            continue;
        }
        int x=0;
        int y=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                y=i;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(s[j]=='1'){
                x=j;
            }
        }
        cout<<2*max(y+1,n-(x))<<endl;
    }
}
