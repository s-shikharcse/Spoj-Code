#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;

	long long a[2510],b[2510],c[2510],d[2510],rhs;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}

	unordered_map<int, int> lhs;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			lhs[a[i]+b[j]]++;
		}
	}
	unsigned long long ans = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			rhs = -(c[i]+d[j]);
		ans += lhs[rhs];
		}
	}
	cout<<ans<<endl;	
}