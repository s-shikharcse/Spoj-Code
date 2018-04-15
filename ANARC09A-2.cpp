#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int i = 1;
	string s;
	
	while(true){
		cin>>s;
		if(s[0]=='-') 
			break;

		int len = s.length();

		int str = 0, ans = 0;
		
		for(int j=0;j<len;j++){
			if(s[j]=='{')
				str++;
			else if(s[j]=='}')
				str--;
			if(str<0){
				ans++;
				str+=2; 
			}
			else if(str>=len-j){
				ans++;
				str-=2;
			}			
		}
		cout<<i<<". "<<ans<<"\n";
		i++;
	}
}