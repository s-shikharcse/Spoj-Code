#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
unsigned long int count,n,e;
while(t--)
{
cin>>e>>n;
count=0;
while(1)
{
if((e==0)||(e+n<=2)||(n==0))
break;
if(n>=e)
{
e--;
n=n-2;
count++;
}
else if(e>n)
{
e=e-2;
n--;
count++;
}
}
cout<<count<<endl;

}

}
