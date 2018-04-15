#include<iostream>
#include<algorithm>
#define MAX 100005
typedef long long ll;

using namespace std;

int main(){
	ll n,m;
	cin>>n>>m;
	int *a = new int[n];
	for(ll i=0;i<n;i++) cin>>a[i];

	ll l = 0,r = 0,ans = 0,sum = 0 ;
	while(l<n){
		while(r<n and a[r]+sum<=m){
			sum += a[r];
			r++;
		}
		ans = max(ans,sum);
		sum -= a[l];
		l++;
	}	
cout<<ans<<endl;
}