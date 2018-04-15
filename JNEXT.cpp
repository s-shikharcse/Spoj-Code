#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,input;
	cin>>t;
	while(t--){
		long long int res = 0;
		int mul = 1;
		cin>>n;
		vector<int>v;
		stack<int>s2;
		stack<int>s;
		
		for(int i=0;i<n;i++){
			cin>>input;
			s.push(input);
		}
		
		int topp = s.top();
		s.pop();
		s2.push(topp);

		while(topp < s.top()){
			topp = s.top();
			s.pop();
			s2.push(topp);
		}

		topp = s.top();
		s.pop();

		while(!s2.empty()){
			s.push(s2.top());
			s2.pop();
		}

		s.push(topp);

		while(!s.empty()){
			v.push_back(s.top());
			s.pop();
		}
		
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i];
		}
		cout<<endl;	
	}
}