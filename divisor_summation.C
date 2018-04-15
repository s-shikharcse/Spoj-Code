#include<iostream>
using namespace std;

int main()
{
int i,t,n;
cin>>t;
while(t--)
{
long long int sum=0;
cin>>n;
for(i=1;i<n;i++)
{
if(n%i==0)
sum+=i;
}
cout<<sum<<endl;
}
}
