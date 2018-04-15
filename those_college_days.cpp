#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,n,no_of_digits;
	cin>>t;
	while(t--){
		unsigned long long x;
		cin>>n;
		if(n==0) {
			cout<<1<<"\n";
			continue;
		}
		if(n>0){
			no_of_digits = (int)log10((double)n)+1;
			x = pow(10,no_of_digits-1);
		}
		else {
			ll absolute = abs(n);
			no_of_digits = (int)log10((double)absolute)+1;
			x = absolute*2 + pow(10,no_of_digits-1);
		}
		cout<<x<<"\n";
	}
}