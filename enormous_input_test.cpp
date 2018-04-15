#include<iostream>
using namespace std;

int main(){
	int n,k,input,count = 0;
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>input;
		if(input%k==0)
			count++;
	}
	cout<<count<<endl;
}