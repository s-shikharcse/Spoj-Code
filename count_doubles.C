#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int *, int);
int main()
{
int t,n;
cin>>t;
while(t--)
{
int count=0;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
count= binary_search(a,n);
cout<<count<<endl;
}
}

int binary_search(int *a,int n)
{
int x,count=0,low,high,mid;

for(int i=0;i<n;i++)
{ 
low=i,high=n-1,mid=0;
x=a[i];
while(low<=high)
{
mid=((low+high)/2);
if((2*x)>a[mid]) low=mid+1;
else if((2*x)<a[mid]) high=mid-1;
else {
count++;
}
}
}
return count;
}
