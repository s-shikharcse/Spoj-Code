#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX=1e6+5;
ll a[MAX],sum[MAX];

int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll count_0 = 0,count_equal = 1,ans = 0;
		for(ll i=0;i<n;i++){
			cin>>a[i]; 
		}
		
		fill(sum,sum+n+1,0);
		for(ll i=1;i<=n;i++)
			sum[i]+=a[i-1];
		sort(sum,sum+n+1);

		for(ll i=1;i<=n;i++){
			if(sum[i]==0)	count_0++;
			if((i<n)and(sum[i]==sum[i+1])) count_equal++;
			else if((i<n)and(count_equal!=1)and(sum[i]!=sum[i+1]))
				ans += (count_equal*(count_equal-1))/2;		
			else count_equal = 1;
		}	
		for(ll i=0;i<=n;i++)
			cout<<sum[i]<<" ";
		cout<<ans+count_0<<endl;
	}
}