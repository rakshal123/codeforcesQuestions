#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
    }else if(m==n){
        cout<<0<<endl;
    }else{
        ll c=m/n;
        ll t=c;
        int count=0;
        if(c%6==0){
            while(c%6==0){
                count++;
                c/=6;
            }
        }
        int count_2=0,count_3=0;
        while(c%2==0){
            count_2++;
            c/=2;
        }
        while(c%3==0){
            count_3++;
            c/=3;
        }
        if((t%2==0 or t%3==0) and 2*count+count_2+count_3!=0 and c==1){
            cout<<2*count+count_2+count_3;
        }else{
            cout<<-1;
        }
    }
}