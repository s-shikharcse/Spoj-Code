#include <bits/stdc++.h>
using namespace std;

int tree[3*1000000];
int arr[1000000];

/*this function is used to build the 
Segment Tree. We used o-indexed array
to store the tree*/
void build(int node,int start,int end)
{
   if(start==end)
   {
      tree[node] =  arr[start];
   }
   else
   {
      int mid = (start+end)/2;
      build(2*node+1,start,mid);
      build(2*node+2,mid+1,end);
      tree[node] =  max(tree[2*node+1],tree[2*node+2]);
   }
   
}

/*This function is used to query the Segment Tree
to find the maximum of the given range*/
int query(int node,int start,int end,int l,int r)
{
   if(start>r || end<l || l>r)
      return 0;
   
   /*If completely inside*/	
   if(l<=start && end<=r)	
      return tree[node];
   
   int mid = (start+end)/2;
   /*If partially inside*/
   int p1 = query(2*node+1,start,mid,l,r);
   int p2 = query(2*node+2,mid+1,end,l,r);
   return max(p1,p2);
}

int main() {
   ios::sync_with_stdio(false);
   
   int n,k;
   cin>>n;
   for(int i=0;i<n;++i)
      cin>>arr[i];
      
   cin>>k;	
   build(0,0,n-1);
   
   for(int i=0;i<n-k+1;++i)
      cout<<query(0,0,n-1,i,i+k-1)<<" ";
   return 0;
}