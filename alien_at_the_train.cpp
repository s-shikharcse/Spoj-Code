#include<iostream>
#define MAX 100005
#define inf 1000000000
typedef long long ll;

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
		ll At,Bt,array[MAX];
		cin>>At>>Bt;

		for(ll i=0;i<At;i++) cin>>array[i];

		ll l=0,r=0,ans=-1,ans2=inf,sum=0,stations;	
		while(l<At){
			stations = 0;
			while(r<At and sum+array[r]<=Bt){
				sum += array[r];
				stations = r-l+1;
				r++;
 			}
 			if(stations>ans){
 				ans = stations;
 				ans2 = sum;

 			}
 			else if((stations==ans)and(sum<ans2)){
 				ans2 = sum;
 			}
 			sum -= array[l];
 			l++;
		}
	cout<<ans2<<" "<<ans<<endl;		
	}		
}