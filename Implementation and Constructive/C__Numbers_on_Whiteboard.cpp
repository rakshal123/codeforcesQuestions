#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout<<2<<"\n";
        if(n==2){
            cout<<2<<" "<<1<<endl;
            continue;
        }
        cout<<n-2<<" "<<n<<"\n";
        int a=n-1;
        int b=n-1;
        for(int i=1;i<n-1;i++){
            cout<<b<<" "<<a<<"\n";
            b=(a+b)/2;
            a=b-2;
        }
    }
}