#include<iostream>
#include<map>
using namespace std;

const int SZ=501;
int main()
{
int q,n;
cin>>q;

map <int,int> prime;

bool a[SZ]={0};
a[0]=a[1]=1;
for(int i=2;i<SZ;i++)
{
for(long long int j=i*i;j<SZ;j+=i)
{
a[j]=1;
}
}
for(int i=0;i<SZ;i++)
{
if(a[i]==0)
prime[i+1]=i;
}

while(q--)
{
cin>>n;
map<int,int>::iterator p;
for(p=prime.begin();p!=prime.end();p++)
{
if((*p).first==n)
{
cout<<(*p).second<<endl;
break;
} 
}
}
}
