#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
long long int a,b,i,ii,sum;
while(t--)
{
sum=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
ii=i;
while(ii!=0)
{
int d=ii%10;
sum+=d;
ii=ii/10;
}
}
cout<<sum<<endl;
}


}
