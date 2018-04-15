#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
unsigned long int m,n;

for(int i=0;i<t;i++)
{
cin>>m>>n;
for(int j=m;j<=n;j++)
{
int flag=1;
for(int k=2;k<=sqrt(j);k++)
{
if((j%k)==0)
{
flag=0;
break;
}
}
if((flag==1)&&(j!=1))
cout<<j<<endl;
}
}


}
