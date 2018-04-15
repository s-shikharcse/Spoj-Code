#include<iostream>
using namespace std;

int main()
{
int t;
unsigned long long int i,n;
cin>>t;
for(int j=1;j<=t;j++)
{
cin>>n;
if(n%2==0)
{
for(i=n/2;i>=1;i=i/2)
{
if((n%i==0)&&(i%2!=0))
{
cout<<"Case "<<j<<": "<<i<<endl;
break;
}
}
}
else
cout<<"Case "<<j<<": "<<n<<endl;
}
}
