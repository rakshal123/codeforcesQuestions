#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<long>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int p=0;
    for(int i=0;i<n;i++){
        p=i;
        long ele=v[p];
        int j=1;
        int f=0;
        while(j<=a and (p-j)>=0 and ele<v[p-j]){
            j++;                        
        }
        if(j>a or (p-j)<0){
            f++;
        }
        j=1;
        while(j<=b and (p+j)<n and ele<v[p+j]){
            j++;
        }
        if(j>b or (p+j)>=n){
            f++;
        }
        if(f==2){
            break;
        }
        // cout<<p<<" "<<f<<endl;
    }
    cout<<p+1;
}