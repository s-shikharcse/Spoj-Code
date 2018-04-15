#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	int n,s[110];
	cin>>n;

	for(int i=0;i<n;i++)
		cin>>s[i];

	long long int index = 0,right;
	unsigned long long ans = 0;
	unordered_map<long long, long long> chk;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				chk[(s[i]*s[j] + s[k])]++;
			}
		}		
	}
	for(int i=0;i<n;i++){
		if(s[i]==0) continue;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				right = (s[i]*(s[j]+s[k]));
				if(chk.find(right) != chk.end()){
					ans += chk[right];
				}
			}
		}
	}			
	cout<<ans<<"\n";
}