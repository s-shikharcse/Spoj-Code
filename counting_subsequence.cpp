#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n+5],sum[n+6];
		fill(sum,sum+n+6,0);

 		ll ans = 0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			sum[i+1] += a[i];
			if(sum[i+1]==47)
				ans++;
		}
		cout<<ans<<endl;
	}

}