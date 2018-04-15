#include<iostream>
#include<stdio.h>
using namespace std;
 
long long int merge(int *a,int start,int mid,int end)
{
    long long int inv_count=0;
int p=start,q=mid+1,r=end-start+1,k=0;
int arr[end-start+1];
for(int i=start;i<=end;i++)
{
if(p>mid)
arr[k++]=a[q++];
else if(q>end)
arr[k++]=a[p++];
else if(a[p]<=a[q])
{
arr[k++]=a[p++];
}
else
{
arr[k++]=a[q++];
inv_count += mid-p+1;
}
}
for(int i=0;i<r;i++)
{
a[start++]=arr[i];
}
return inv_count;
}
 
long long int merge_sort(int *a,int start, int end)
{
long long int inv_count=0;
if(start<end)
{
int mid=(start+end)/2;
inv_count = merge_sort(a,start,mid);
inv_count += merge_sort(a,mid+1,end);
inv_count += merge(a,start,mid,end);
}
return inv_count;
}
 
int main()
{
int t,n;
scanf("%d",&t);
//cin>>n;
while(t--){
scanf("%d",&n);
int *a = new int [n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
long long int inv_count = merge_sort(a,0,n-1);
cout<<inv_count<<endl;
}
}