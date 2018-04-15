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
		ll a[n+5],l=0,r=0,sum=0,ans=0;
		for(ll i=0;i<n;i++) cin>>a[i];
		while(l<n){
			while(r<n and sum+a[r]<=47){
				sum += a[r];
				if(sum==47)
					ans++;
				r++;
			}
			sum -= a[l];
			l++;
		}
		cout<<ans<<endl;
	}
return 0;	
}