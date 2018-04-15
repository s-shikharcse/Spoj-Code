#include<iostream>
using namespace std;

int main()
{
unsigned long long int n;
cin>>n;
int flag=0;
while(n>1)
{
if(n%2==0)
n=n/2;
else
{flag=1;
break;}
}
if(flag==0)
cout<<"TAK";
else
cout<<"NIE";
}
