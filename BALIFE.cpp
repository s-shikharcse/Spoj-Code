#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,a[9005],ans;
	float avg;

	while(1){

		long long sum = 0;
		int maxx = INT_MIN;
		bool flag = false;

		cin>>n;
		
		if(n==-1)
			break;
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}

		avg = sum/(n+0.0);
		
		if(avg-int(avg) != 0){
			cout<<-1<<endl;
		}
		else{
			
			avg = int(avg);
			
			for(int i=0;i<n-1;i++){
				
				int req = avg - a[i];
				
				if(req>0 and req<=(a[i+1]-avg)){
					a[i+1] -= req;
					ans = req;
					maxx = max(ans,maxx);
				}
				else if(req>0 and req>(a[i+1]-avg)){
					flag = true;
					break;
				}
				if(req<0 and i<n-1){
					 /*residue = abs(req);
					 if(residue >= a[i])
					 	residue = a[i];
					 ans = req;
					 maxx = max(ans,maxx);*/
					a[i+1] += abs(req);
				} 
			} 	
		if(flag)
			cout<<-1<<"\n";
		else
			cout<<maxx<<"\n";
		}
	}
}