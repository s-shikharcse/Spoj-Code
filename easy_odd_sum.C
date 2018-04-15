#include<iostream>
using namespace std;

int main()
{
int a,b;
cin>>a>>b;
long long int sum=0;
if(a%2!=0)
{
for(int i=a;i<=b;i+=2)
sum+=i;
}
else
{
for(int i=a+1;i<=b;i+=2)
sum+=i;
}
cout<<sum<<endl;
}
