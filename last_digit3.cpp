#include<iostream>
#include<math.h>
typedef long long ll;
using namespace std;

int main(){
	ll t,n,m,res;
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(n==0 and m==0){
			cout<<1<<endl;
			continue;
		}
		else if(n==0 and m!=0){
			cout<<0<<endl;
			continue;
		}
		else if(n!=0 and m==0){
			cout<<1<<endl;
			continue;
		}
		ll exp = (m%4==0)? 4 : m%4;
	    res = pow(n%10,exp); 
	cout<<res%10<<endl;	
	}
}