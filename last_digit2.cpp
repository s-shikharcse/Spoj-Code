#include<iostream>
typedef unsigned long long ull ;
using namespace std;

int main(){
	ull t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(m==0) {
			cout<<1<<endl;
			continue;
		}
		ull last_n = n%10, period;
		if(last_n==0 or last_n==1 or last_n==5 or last_n==6)
			cout<<last_n<<endl;
		else if(last_n==2 or last_n==3 or last_n==7 or last_n==8){
			period = m%4;
			if(last_n==2){
				if(period==2) cout<<4<<endl;
				else if(period==3) cout<<8<<endl;
				else if(period==4) cout<<6<<endl;
				else cout<<2<<endl;
			}
			else if(last_n==3){
				if(period==2) cout<<9<<endl;
				else if(period==3) cout<<7<<endl;
				else if(period==4) cout<<1<<endl;
				else cout<<3<<endl;
			}
			else if(last_n==7){
				if(period==2) cout<<9<<endl;
				else if(period==3) cout<<3<<endl;
				else if(period==4) cout<<1<<endl;
				else cout<<7<<endl;
			}
			if(last_n==8){
				if(period==2) cout<<4<<endl;
				else if(period==3) cout<<2<<endl;
				else if(period==4) cout<<6<<endl;
				else cout<<8<<endl;
			}
		}
		else {
			period = m%2;
			if(last_n==4){
				if(period==2) cout<<6<<endl;
				else cout<<4<<endl;
			}
			else if(last_n==9){
				if(period==2) cout<<1<<endl;
				else cout<<9<<endl;
			}
		}				
	}
}