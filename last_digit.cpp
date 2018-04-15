#include<iostream>
typedef unsigned long long ull;
using namespace std;

ull power(ull x, ull y){
	if(y==0)
		return 1;
	ull temp = power(x,y/2);
	if(y%2==0)
		return temp*temp;
	else
		return x*temp*temp;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ull t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<power(a,b)<<endl;
		cout<<power(a,b)%10<<endl;
	}
}