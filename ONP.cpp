#include <bits/stdc++.h>
using namespace std;

int get_priority(char x){
	switch(x){
		case '+': return 1;
				break;
		case '-': return 2;
				break;
		case '*': return 3;
				break;
		case '/': return 4;
				break;
		case '^': return 5;
				break;
		case '(': return 6;
				break;
		case ')': return 7;
				break;												
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int len = str.length();

		stack<char> s;
		s.push('(');

		vector<char>v;
		for(int i=0;i<len;i++){
			if(str[i]>='a' and str[i]<='z'){
				v.push_back(str[i]);
			}
			else{
				if(str[i]=='('){
					s.push(str[i]);
					continue;
				}
				if(str[i]==')'){
					while(!s.empty() and s.top()!='('){
						v.push_back(s.top());
						s.pop();
					}
					s.pop();
					continue;
				}

				int prio = get_priority(str[i]);
				if(prio < get_priority(s.top())){
					s.push(str[i]);
				}
				else{
					while((!s.empty())and(prio>=get_priority(s.top()))){
						v.push_back(s.top());
						s.pop();
						//get_priority(s.top());
					}
				}
			} 
		}


		/*while(!s.empty()){
			v.push_back(s.top());
			s.pop();
		}*/
		
		for(int i=0;i<v.size();i++){
			//if(v[i]!='(' or v[i]!=')')
				cout<<v[i];
		}
		cout<<endl;
	}
}