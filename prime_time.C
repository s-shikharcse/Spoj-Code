#include<iostream>
#include<math.h>
using namespace std;

const int SZ = 10001;

int main()
{
int a[SZ]={0};
int n;
a[0]=a[1]=1;
for(int i=2;i<SZ;i++)
{
for(long long j=i*i;j<SZ;j+=i)
{
a[j]=1;
}
}


/*for(int i=0;i<SZ;i++)
cout<<a[i]<<endl;*/

int k=0;
for(int i=0;i<SZ;i++)
{
if(a[i]==0)
a[k++]=i;
}


cin>>n;
for(int i=0;i<k&&a[i]<=n;i++)
{
int factor=0,k=1;
while(floor(n/pow(a[i],k))!=0)
{
factor+=floor(n/pow(a[i],k));
k++;
}
cout<<a[i]<<"^"<<factor;
if(a[i+1]<=n)
cout<<" * ";
}
cout<<endl;
}
