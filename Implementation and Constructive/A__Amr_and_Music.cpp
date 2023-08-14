#include<bits/stdc++.h>
using namespace std;
map<int,queue<int>>mp;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(mp.find(v[i])==mp.end()){
            queue<int>pos;
            pos.push(i+1);
            mp.insert({v[i],pos});
        }else{
            mp[v[i]].push(i+1);
        }
    }
    sort(v.begin(),v.end());
    int count=0;
    vector<int>positions;
    for(int i=0;i<n and k-v[i]>=0;i++){
        count++;
        positions.push_back(mp[v[i]].front());
        mp[v[i]].pop();
        k-=v[i];
    }
    cout<<count<<endl;
    if(count>0){
        for(int i : positions){
            cout<<i<<" ";
        }
    }
}