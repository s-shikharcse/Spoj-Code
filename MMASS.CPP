#include <bits/stdc++.h>
using namespace std;

int get_wt(char x){
	switch(x){
		case 'H': return 1;
		break;
		case 'C': return 12;
		break;
		case 'O': return 16;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	string str;
	cin>>str;

	int len = str.length();
	stack<long long> s;

	long long gp_wt = 0,ans=0;

	for(int i=0;i<len;i++){
		char x = str[i];
		if(str[i]=='('){
			gp_wt = 0;
			s.push(str[i]);
			continue;
		}
		else if(str[i]=='C' || str[i]=='H' || str[i]=='O'){
			gp_wt += get_wt(str[i]); 
		}
		else if(str[i]==')'){
			ans += gp_wt;
			s.pop(); //popped '('
			s.push(ans);
		}
		else if(str[i]>=48 and str[i]<=57){
			int mol = str[i]-'0';
			long long topp = s.top();
			s.pop();
			topp = topp*mol;
			s.push(topp);
			ans += (mol-1)*gp_wt;
		}
	}

}