#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=arr[0],maxi=arr[0];
    int minInd=0,maxInd=0;
    for(int i=1;i<n;i++){
        if(arr[i]<=mini){
            minInd=(arr[i]==mini)?max(minInd,i):i; 
            mini=arr[i];
        }
        if(arr[i]>=maxi){
            maxInd=(arr[i]==maxi)?min(maxInd,i):i;
            maxi=arr[i];
        }
    }
    if(minInd<maxInd){
        cout<<maxInd+(n-minInd-2);
    }else{
        cout<<maxInd+n-minInd-1;
    }
}