#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	long long int hist[100005];
	while(true){
		long long int n,i;
		cin>>n;
		if(n==0) break;		

		for(i=0;i<n;i++)
			cin>>hist[i];

		stack<long long int> s;
		long long area_with_top = 0, max_area = 0;

		for(i=0;i<n;){
			if(s.empty() || hist[i]>=hist[s.top()]){
				s.push(i++);
			}
			else{
				long long int temp = s.top();
				s.pop();
				area_with_top = hist[temp] * (s.empty()? i: i-s.top()-1);
				max_area = max(area_with_top,max_area);
			}
		}

		while(!s.empty()){
			long long int temp = s.top();
			s.pop();
			area_with_top = hist[temp] * (s.empty()? i: i-s.top()-1);
			max_area = max(max_area,area_with_top);
		}
		cout<<max_area<<"\n";
	}
}