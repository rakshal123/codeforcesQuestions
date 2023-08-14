#include<bits/stdc++.h>
#define pb push_back
using namespace std;
string result(int x,int y){
    string result="";
    for(;x--;){
        result.pb('4');
    }
    for(;y--;){
        result.pb('7');
    }
    return result;
}
int main(){
    long n;
    cin>>n;
    int t=n;
    int x=0,y=0;
    while(t>=4 and t%7!=0){
        t-=4;
        x++;
        y=t/7;
    }
    if(4*x+7*y==n){
        cout<<result(x,y);
    }else if(y==0 and t%7==0){
        cout<<result(0,t/7);
    }else{
        cout<<-1;
    }
}