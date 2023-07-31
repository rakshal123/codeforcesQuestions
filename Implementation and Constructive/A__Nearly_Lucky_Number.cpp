#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int count_4 = count(s.begin(),s.end(),'4');
    int count_7 = count(s.begin(),s.end(),'7');
    if(count_7+count_4==4 or count_7+count_4==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}