#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++) cin>>a[i];
int flag=0;
long long int sum=0;
unsigned long long int need=0;
for(int i=0;i<n;i++)
{
sum+=a[i];
if(sum>0) continue;
else if(sum<=0) 
{
flag=1;
need+=abs(sum);
sum=0;
}
}
if(flag==1) cout<<need+1<<endl;
else cout<<need<<endl;
}
}
