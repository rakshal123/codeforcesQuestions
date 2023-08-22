#include<bits/stdc++.h>
using namespace std;
int main(){
    long x;
    cin>>x;
    if(x<=5){
        cout<<1<<endl;
    }else{
        long ans = (x/5)+(x%5!=0);
        cout<<ans<<endl;
    }
}