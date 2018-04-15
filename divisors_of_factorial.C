#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
const int SZ = 50001;
int main()
{
int t,n;
int a[SZ];
                                 /*sieve-----its also working  */
fill(a,a+SZ-1,0);
/*a[0]=a[1]=1;
for(long long i=2;i<SZ;i++)
{
for(long long j=i*i;j<SZ;j+=i)
{
a[j]=1;
}
}
int k = 0;
for(int i = 0;i <SZ;i++)
{
if(a[i]==0)
a[k++]=i;
} */                            /*sieve*/

int k;
for(int i=2;i<SZ;i++)         /*simple logic for calculating prime*/
{                             /*from 1-50000 and storing them in a*/
int flag=0;
for(int j=2;j<=sqrt(i);j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
a[k++]=i;
}

cin>>t;
while(t--)
{
long long int answer=1;
cin>>n;

int factor;
for(int i=0;i<k&&a[i]<=n;i++)
{
int kk=1;
factor=0;
while(floor(n/(pow(a[i],kk)))!=0)
{
factor+=floor(n/(pow(a[i],kk)));
kk++;
}
answer=(answer*(factor+1))%(1000000000+7);
}
cout<<answer<<endl;
}
}


