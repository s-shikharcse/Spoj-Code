#include<iostream>
#include<algorithm>
typedef long long int lli;
using namespace std;

lli seg_tree[400000],lazy[400000];

void lazy_update(lli s,lli e,lli node_num){
	seg_tree[node_num] += (e-s+1)*lazy[node_num];
	if(e>s){
		lazy[node_num*2] += lazy[node_num];	
		lazy[node_num*2+1] += lazy[node_num];	
	}
	lazy[node_num] = 0;
}

void set_lazy(lli s, lli e, lli node_num, lli val){
	if(e>s){
		lazy[node_num*2] += val;
		lazy[node_num*2+1] += val;
	}
}

void range_update(lli l,lli r,lli val,lli s,lli e,lli node_num){
	if(lazy[node_num]!=0)
		lazy_update(s,e,node_num);
	if(s>r or e<l) return;
	else if(s>=l and e<=r) {
		seg_tree[node_num] += (e-s+1)*val;
		set_lazy(s,e,node_num,val);
	}
	else {
		lli m = (s+e)/2;
		range_update(l,r,val,s,m,node_num*2);
		range_update(l,r,val,m+1,e,node_num*2+1);
		seg_tree[node_num] = seg_tree[node_num*2]+seg_tree[node_num*2+1];
	}
}

lli query(lli l, lli r,lli s, lli e,lli node_num){
	if(lazy[node_num]!=0){
		lazy_update(s,e,node_num);
	}
	if(s>r or e<l) return 0;
	else if(s>=l and e<=r){
		return seg_tree[node_num];
	}
	else {
		lli m = (s+e)/2;
		return query(l,r,s,m,node_num*2)+query(l,r,m+1,e,node_num*2+1);
	}
}

int main(){
	lli t,n,c,qry,p,q,v;
	cin>>t;
	while(t--){
		cin>>n;
		fill(seg_tree,seg_tree+400000,0);
		fill(lazy,lazy+400000,0);
		
		//build(0,n-1,1);
		cin>>c;
		for(lli i=0;i<c;i++){
			cin>>qry>>p>>q;
			if(!qry) {
				cin>>v;
				range_update(p-1,q-1,v,0,n-1,1);
			}
			else{
				cout<<query(p-1,q-1,0,n-1,1)<<endl;
			}
		}
	}
}		
