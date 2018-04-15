#include<iostream>
using namespace std;

int main(){
	//ios :: sync_wih_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
	int n,k,max;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	for(int i=0;i<=n-k;i++){
	    max = a[i];
		for(int j=1;j<k;j++){
			if(a[i+j]>max)
				max = a[i+j];
		}
		cout<<max<<" ";
	}	
}