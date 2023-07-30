#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int value;
            cin>>value;
            if(value==1){
                x=i;
                y=j;
            }
        }
    }

    cout<<(x>2?x-2:2-x)+(y>2?y-2:2-y);

}
