#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
unsigned long int n,i;
while(t--)
{
cin>>n;
int flag=0;
for(i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}
