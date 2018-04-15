#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;

	long long a[2510],b[2510],c[2510],d[2510];
	vector<long long > lhs;
	vector<long long > rhs;

	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			lhs.push_back(a[i]+b[j]);
			rhs.push_back(-(c[i]+d[j]));
		}
	}

	sort(lhs.begin(),lhs.end());
	//sort(rhs.begin(),rhs.end());

	pair<vector<long long>:: iterator,
	    vector<long long>:: iterator> p;

	unsigned long long ans = 0;
	for(int i=0;i<n*n;i++){
		p = equal_range(lhs.begin(),lhs.end(),rhs[i]);
		int lower = p.first - lhs.begin();
		int upper = p.second - lhs.begin();
		ans += upper-lower;
	}
	cout<<ans<<endl;	
}