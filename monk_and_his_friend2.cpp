#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		ll input;
		map<int,bool>present;
		for(ll i=0;i<n;i++){
			cin>>input;
			present[input] = true;
		}
		for(ll i=0;i<m;i++){
			cin>>input;
			if(present[input]==true){
				cout<<"YES\n";
				present[input] = true;
			}
			else
				cout<<"NO\n";
		}
	}
}