#include <bits/stdc++.h>
using namespace std;

int get_min_insertion(string s, int n){
	int table[n][n];
	memset(table,0,sizeof(table));
	for(int gap=1;gap<n;gap++){
		for(int l=0,h=gap;h<n;l++,h++){
			table[l][h] = (s[l]==s[h])? table[l+1][h-1]: min(table[l][h-1],table[l+1][h])+1;
		}
	}
	return table[0][n-1];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;
	string s;
	cin>>s;

	cout<<get_min_insertion(s,s.length());
}