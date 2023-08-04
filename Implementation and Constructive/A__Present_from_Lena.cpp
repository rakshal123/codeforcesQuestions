#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n++;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
            
        }
        int c=0;
        for(int k=n-1-i;k<n;k++){
            cout<<c;
            if(i!=0){
                cout<<" ";
            }
            c++;
        }
        c=c-2;
        while(c>=0){
            cout<<c;
            if(c!=0){
                cout<<" ";
            }
            c--;
        }
        cout<<"\n";
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        int c=0;
        for(int k=i;k<n;k++){
            cout<<c;
            if(i<n-1){
                cout<<" ";
            }
            c++;
        }
        c=c-2;
        while(c>=0){
            cout<<c;
            if(c!=0){
                cout<<" ";
            }
            c--;
        }
        cout<<"\n";
    }
}