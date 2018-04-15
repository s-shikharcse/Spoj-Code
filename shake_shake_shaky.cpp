#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll array[500010];
bool check(ll mid,ll k,ll n){
	if(k==1)
		return true;
	ll sum = 0;
	for(ll i=n-1;i>=0;i--){
		sum = sum + (array[i]/mid);
	}
	if(sum>=k)
		return true;
	else
		return false;
}

ll binary_search(ll k,ll n){
	ll low=1,high=array[n-1]+1,mid;
	while(low<high){
		mid = low+(high-low)>>1;
		if(check(mid,k,n))
			low = mid+1;
		else
			high = mid;
	}
return low-1;
}

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	int t;
	ll n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<"HELLO";
		for(ll i=0;i<n;i++)	
			cin>>array[i];
		sort(array,array+n);
		cout<<binary_search(k,n)<<"\n";
	}
return 0;	
}
