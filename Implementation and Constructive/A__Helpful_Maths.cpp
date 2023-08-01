#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    vector<char> arr;
    for(char ch : s){
        if(ch=='+')continue;
        arr.push_back(ch);
    }
    sort(arr.begin(),arr.end());
    string result="";
    for(char ch:arr){
        result=result+ch+'+';
    }
    cout<<result.substr(0,result.size()-1);
}