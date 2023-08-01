#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin>>n;
    long max_length=1;
    long long ele;
    long local_length=1;
    cin>>ele;
    for(long i=1;i<n;i++){
        long long input;
        cin>>input;
        if(input>ele){
            local_length++;
            max_length=max(max_length,local_length);
        }else{
            local_length=1;
        }
        ele=input;
    }
    cout<<max_length;
}