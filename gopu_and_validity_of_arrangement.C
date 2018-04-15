#include<iostream>
using namespace std;

int main()
{
int t,n;
cin>>t;
while(t--)
{
int flag=0;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=1;i<n;i++)
{
if((a[i]>i)||(a[0]!=0))
{
flag=1;
break;
}
}
if(flag==0)
cout<<"YES"<<endl;
else if(flag==1)
cout<<"NO"<<endl;
}
}
