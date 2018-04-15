#include<iostream>
#include<deque>
using namespace std;

int main(){
	int i,n,k,max;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	
 	deque<int> Q(k);
 	for(i=0;i<k;i++){
 		while(!Q.empty() and a[i]>=a[Q.back()])
 			Q.pop_back();
 		Q.push_back(i);
 	}

 	for(;i<n;i++){
 		cout<<a[Q.front()]<<" ";
 		while(!Q.empty() and Q.front()<=i-k)
 			Q.pop_front();
 		while(!Q.empty() and a[i]>=a[Q.back()])
 			Q.pop_back();
 		Q.push_back(i);
 	}
 	cout<<a[Q.front()];
}