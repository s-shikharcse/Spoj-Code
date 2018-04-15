#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,input;

	cin>>t;
	while(t--){
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool res = next_permutation(a,a+n);
		if(res==true){
			for(int i=0;i<n;i++){
				cout<<a[i];
			}
			cout<<endl;	
		}
		else{
			cout<<-1<<endl;
		}
	}
}