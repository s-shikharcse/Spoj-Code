#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,convoy[1005];
	while(1){
		cin>>n;
		if(n==0) break;

		bool flag = false;
		stack<int>s1;//for street
		stack<int>s2;//for main road 
		s1.push(INT_MAX);

		for(int i=0;i<n;i++){
			cin>>convoy[i];
		}

		
		for(int i=0;i<n-1;i++){
			if(convoy[i] > convoy[i+1]){
				if(convoy[i] > s1.top()){
					flag = true;
					break;
				}
				else{
				s1.push(convoy[i]);
				}
			}
			else{
				s2.push(convoy[i]);
				while((!s1.empty() & !s2.empty())and(s1.top()-s2.top() <=1)){
					s2.push(s1.top());
					s1.pop();
				} 
			}
		}

		if(flag)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
}