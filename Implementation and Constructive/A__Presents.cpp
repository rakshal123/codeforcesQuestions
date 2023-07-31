#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        int f;
        cin>>f;
        // cout<<f;
        arr[f-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}