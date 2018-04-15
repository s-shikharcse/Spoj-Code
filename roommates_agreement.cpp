#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e6+5;

int main(){
	int t,n,a[MAX];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];

		int l=0,r=0;
		long long ans=0,sum=0;
		while(l<n){
			//sum += a[l];
			while(r<n){
				sum += a[r];
				if(sum==0)
					ans++;
				r++;
			}
			l++;
			if(sum!=0)
				sum-=a[l];
		}
		cout<<ans<<endl;
	}
}