#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        // 1 donut in shop one will cost a dollars
        // same donut we can have in c dollars from second shop

        if(a<c){
            cout<<1<<" ";
        }else{
            cout<<-1<<" ";
        }

        if(b*a>c){
            cout<<b<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}