#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=0;
    string result="";
    for(int i=0;p+i<n;i++){
        p+=i;
        result+=s[p];
    }
    cout<<result;
}