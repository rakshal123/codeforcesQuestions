#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<long>v(3,0);
	    for(int i=0;i<3;i++){
	        cin>>v[i];
	    }
	    long n;
	    cin>>n;
	    sort(v.begin(),v.end());
	    int add = (v[2]-v[0])+(v[2]-v[1]);
	    if((n-add)==0 or ((n-add)>0 and (n-add)%3==0)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}