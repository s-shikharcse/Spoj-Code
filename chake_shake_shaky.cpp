#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int t;
	cin>>t;
	ll n,k,ans;
	while(t--){
		bool flag = false;
		ans = 0;
		unsigned long long sum = 0;
		cin>>n>>k;
		ll array[n];
		for(ll i=0;i<n;i++) cin>>array[i];
		sort(array,array+n,greater<int>());
		ll i=0;
		for(;i<n;i++){
			sum += array[i];
			if(array[i]>=sum/k)
				ans = sum/k;
			else{
				for(ll j=0;j<=i-1;j++){
					while(array[j]%ans!=0)
						ans--;
				}
				cout<<ans<<"\n";
				flag = true;
				break;
			}
		}
		if((!flag and i==n)and(ans!=0)) {
			for(ll j=i-1;j>=0;j--){
				while(array[j]%ans!=0)
					ans--;
			}
			cout<<ans<<"\n";
		}
		else if(!flag and ans==0)
			cout<<0<<"\n";

	}
}