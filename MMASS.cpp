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
	
	stack<char>s;
	for(int i=0;i<len;i++){
		s.push(str[i]);
	}

	int mol,element_wt,gp_wt;
	unsigned long long ans = 0;
	char element;
	while(!s.empty()){
		char topp = s.top();
		if(topp>=48 and topp<=57){
			gp_wt = 0;
			mol = topp-'0';
			s.pop();
			if(s.top()==')'){
				s.pop();
				while(s.top()!='('){
					element = s.top();
					element_wt = get_wt(element);
					gp_wt += element_wt;
				}
			s.pop();
			ans += mol*gp_wt;
			}
			else{
				element = s.top();
				element_wt = get_wt(element);
				ans += mol*element_wt;
			}
		}
		else if(topp=='C' || topp=='H' || topp=='O'){
			element = topp;
			element_wt = get_wt(element);
			ans += element_wt; 
			s.pop();
		}
		else if (topp==')'){
			gp_wt = 0;
			s.pop();
			while(s.top()!=')'){
				element = s.top();
				element_wt = get_wt(element);
				gp_wt += element_wt;
			}
			s.pop();
			ans += gp_wt;
		}
	}
			cout<<ans<<"\n";
}