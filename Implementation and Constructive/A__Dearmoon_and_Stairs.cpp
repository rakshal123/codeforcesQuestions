#include<bits/stdc++.h>
using namespace std;
int result(int count,int c,int m){
    while(c>0 && count%m!=0){
            c--;
            count++;
        }
        if(count%m==0){
            return count;
        }else{
            return -1;
        }
}
int main(){
    int n,m;
    cin>>n>>m;
    int c=0,count=0;
    if(n%2==0){
        c = n/2;
        count=c;
    }else{
        c = (n-1)/2;
        count = c+1;
    }
    cout<<result(count,c,m);
}