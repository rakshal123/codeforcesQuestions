#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> ch(n, vector<char>(m,'.'));
    int f=0;
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            ch[i][j]='#';
        }
    }
    for(int i=1;i<n;i+=2){
        if(f==0){
            ch[i][m-1]='#';
            f=1;
        }else{
            ch[i][0]='#';
            f=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ch[i][j];
        }
        cout<<"\n";
    }
}