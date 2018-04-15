#include<bits/stdc++.h>
using namespace std;

const int MAX = 50005;
int array[MAX];

struct Node{
	int sum,prefixsum;
	int maxsum,suffixsum;
}tree[4*MAX];

void build(int start,int end,int node){
	if(start==end){
		tree[start].sum = array[start];
		tree[start].prefixsum = array[start];
		tree[start].suffixsum = array[start];
		tree[start].maxsum = array[start]; 
	}
	else{
		int mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node].sum = tree[node*2].sum + tree[node*2+1].sum;
		tree[node].prefixsum = max(tree[node*2].prefixsum,tree[node*2+1].prefixsum+) 
	}
}

int query(int left,int right,int start,int end,int node){
	if(start>right or end<left)
		return INF;
	else if(start>=left and end<=right)
		return tree[node];
	else{
		int mid = (start+end)/2;
		int p1 = query(left,right,start,mid,node*2);
		int p2 = query(left,right,mid+1,end,node*2+1);
		return p1+p2; 
	}
}

int main(){
	int n,m,x,y;
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++) cin>>array[i];
	build(0,n-1,1);
	cin>>m;
	for(int i=0;i<m;i++){
		long long Q,ans = INF;
		cin>>x>>y;
		for(int j=x-1;j<=y-1;j++){
			for(int k=j;k<=y-1;k++){
				Q=query(j,k,0,n-1,1);	
				ans = max(Q,ans);
			}
		}
	cout<<ans<<"\n";	
	}	
}