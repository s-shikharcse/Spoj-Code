#include <bits/stdc++.h>
using namespace std;

int lcs(vector<string> &x,vector<string> &y, int n){
	int l[n+1][n+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				l[i][j] = 0;
			else if(x[i-1]==y[j-1])
				l[i][j] = l[i-1][j-1]+1;
			else
				l[i][j] = max(l[i-1][j],l[i][j-1]);
		}
	}
	return l[n][n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n;
	string input;
	cin>>t;
	while(t--){
		vector<string> s1;
		vector<string> s2;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>input;
			s1.push_back(input);
		}
		for(int i=0;i<n;i++){
			cin>>input;
			s2.push_back(input);
		}
		cout<<lcs(s1,s2,n)<<"\n";
	}
}