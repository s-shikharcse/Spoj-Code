#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,rank;
	string team_name;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<int,string> >ranklist;
		for(int i=0;i<n;i++){
			cin>>team_name>>rank;
			ranklist.push_back(make_pair(rank,team_name));
		}
		sort(ranklist.begin(),ranklist.end());
		long long ans = 0;
		for(int i=0;i<n;i++){
			ans += abs((i+1)-ranklist[i].first);
			//cout<<i<<". "<<ranklist[i].second;
		}
		cout<<ans<<"\n";
	}
}