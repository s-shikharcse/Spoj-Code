#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll x[2000005],y[2000005];

void calc_subarray(ll arr[],ll x[], ll n, ll c){
	for(ll i=0;i<(1<<n);i++){
		ll s=0;
		for(ll j=0;j<n;j++){
			if(i & 1<<j){
				s += arr[i+c];
			}
		}
		x[i] = s;
	}
}

ll solve_subset_sum(ll arr[], ll n, ll a, ll b){
	calc_subarray(arr,x,n/2,0);
	calc_subarray(arr,y,n-n/2,n/2);

	ll size_x = 1<<(n/2);
	ll size_y = 1<<(n-n/2);

	sort(y,y+size_y);
	ll ans = 0;
	for(ll i=0;i<size_x;i++){
		int l = lower_bound(y,y+size_y,a-x[i]) - y;
		int u = upper_bound(y,y+size_y,b-x[i]) - y;	
		ans += (u-l);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	ll n,a,b,arr[40];
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	ll ans = solve_subset_sum(arr,n,a,b);
	/*if(a*b <= 0 )
		cout<<ans+1<<"\n";
	else*/
		cout<<ans<<"\n";
}