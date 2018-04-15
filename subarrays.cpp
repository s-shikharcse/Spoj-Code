#include<iostream>
typedef long long ll;
using namespace std;

int main(){
	ll n,k,max=0,maxx;
	cin>>n;
	ll *a = new ll[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;

	for(ll i=0;i<=n;i++){
		max = (a[i]>a[i+1])? a[i]:a[i+1];
		maxx = (a[i+2]>max)? a[i+2]:max;
		cout<<maxx<<" ";	
	}	
}