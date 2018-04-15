//Recursive approach
#include <bits/stdc++.h>
using namespace std;

int get_min_insertion(string s, int l, int h){
	if(l>h)
		return INT_MAX;
	if(l==h)
		return 0;
	if(l==h-1)
		return ((s[l]==s[h])? 0:1);
	else
		return min(get_min_insertion(s,l,h-1),
			get_min_insertion(s,l+1,h))+1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int len = s.length();
		cout<<get_min_insertion(s,0,len-1)<<"\n";
	}
}	