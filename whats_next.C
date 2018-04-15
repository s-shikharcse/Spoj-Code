#include<iostream>
#include<math.h>
using namespace std;

int main()
{
long long int d,t,a[3],test;
float r;
while(1)
{
cin>>a[0]>>a[1]>>a[2];
if((a[0]==0)&&(a[1]==0)&&(a[2]==0))
break;
if((a[1]-a[0])==(a[2]-a[1]))
{
d=a[1]-a[0];
cout<<"AP "<<a[0]+3*d<<endl;
}
else if((a[1]/a[0])==(a[2]/a[1]))
{
r=float(a[1])/a[0];
cout<<"GP "<<a[0]*pow(r,3)<<endl;
}
}
}
