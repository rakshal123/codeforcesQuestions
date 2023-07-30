#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string result="";
        int n,c=1,count=0;
        cin>>n;
        int f=n;
        while(f){
            int d=f%10;
            count+=(d!=0);
            result = result+(d==0?"":to_string(c*d)+" ");
            c*=10;
            f=f/10;
        }
        cout<<count<<"\n";
        cout<<result<<"\n";
    }
}