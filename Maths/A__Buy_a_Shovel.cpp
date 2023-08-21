#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int last_digit = (k%10);
    int f=0;
    int i = 1;
    for(i=1;i<=9;i++){
        if((last_digit*i)%10==r){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<i;
    }else{
        int j=1;
        while((k*j)%10!=0){
            j++;
        }
        cout<<j;
    }
}