#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	cin>>t;

	string s;
	for(int i=1;i<=t;i++){
		cin>>s;
		if(s[0]=='-') break;
		int len = s.length();
		int left = 0, right = 0;
		for(int j=0;j<len/2;j++){
			if(s[i]=='{')
				left++;
			else if(s[i]=='}')
				left--;		
		}
		for(int j=len/2;j<len;j++){
			if(s[i]=='{')
				right++;
			else if(s[i]=='}')
				right--;		
		}
		int ans = 0;
		if(abs(left)==abs(right) and left>right){
			ans = 0;
		}
		else if(abs(left)==abs(right) and left<right){
			ans = -left+right;
		}
		else if(abs(left)<abs(right) and left>right){

		}
		else if(abs(left)<abs(right) and left<right){
				
		}
		else if(abs(left)>abs(right) and left>right){
				ans = (left-right)/2; 
		}
		else if(abs(left)>abs(right) and left<right){
				
		}
	}
}