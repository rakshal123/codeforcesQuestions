#include<bits/stdc++.h>
using namespace std;
string result(set<char>st,int n,int *arr){
    string result="";
        for(char ch:st){
            for(int i=0;i<arr[ch]/n;i++){
                result+=ch;
            }
        }
        // cout<<result;
        string final_result="";
        for(int i=0;i<n;i++){
            final_result+=result;
        }
        return final_result;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    int *arr = new int(256);
    for(char ch:s){
        st.insert(ch);
        arr[ch]++;
    }
    int f=0;
    for(char ch:s){
        if(arr[ch]%n!=0){
            f=1;
            break;
        }
    }
    if(f){
        cout<<-1;
    }else{
        cout<<result(st,n,arr);
    }
}
