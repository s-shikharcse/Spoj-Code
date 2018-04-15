#include<iostream>
using namespace std;

int  main()
{
int t,n,x,y,count;
cin>>t;
while(t--)
{
x=0;
y=0;
count=0;
cin>>n;
x=x+3*(n/5);
y=y-2*(n/5);
count=(n/5)*5;

if(count!=n)
{
x=x+1;
count++;
}
if(count!=n)
{
y=y+2;
count++;
} 
if(count!=n)
{
x=x-3;
count++;
}
if(count!=n)
{
y=y-4;
count++;
}
if(count!=n)
{
x=x+5;
count++;
}

cout<<x<<" "<<y<<endl;
}
}

