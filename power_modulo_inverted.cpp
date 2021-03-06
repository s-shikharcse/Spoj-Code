#include<iostream>
#include<map>
#include<math.h>
typedef long long int lli;
using namespace std;

lli modulo(lli a, lli b, lli c){
	lli x=1,y=a;
	while(b>0){
		if(b%2==1)
			x = (x*y)%c;
	y=(y*y)%c;
	b/=2;
	}
return x%c;
}

lli solve(lli a,lli b,lli m){
	lli n = (int)sqrt(m+.0)+1;
	map<int,int>vals;
	for(lli i=n;i>=1;i--){
		vals[modulo(a,i*n,m)]=i;
	}
	for(lli i=0;i<=n;i++){
		lli cur=(modulo(a,i,m)*b)%m;
		if(vals.count(cur)){
			//lli *pop = .end();
			lli ans= vals[cur]*n -i;
			if(ans<m)
				return ans;
		}
	}
	return -1;
}

int main(){
	lli x,z,k;
	while(true){
		cin>>x>>z>>k;
		if((!x and !z)and !k) break; 
		else{
			lli solutn = solve(x,k,z);
			if(solutn!=-1) cout<<solutn<<endl;
			else cout<<"No Solution"<<endl;
		}
	}
}
	
