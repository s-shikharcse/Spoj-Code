#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a[10];
for(int i=0;i<10;i++)
cin>>a[i];

int sum=0,max=0;
for(int i=0;i<10;i++)
{
sum+=a[i];
if(i<=8){
if(abs(100-sum)<abs(100-sum-a[i+1]))
{
cout<<sum;
break;
}
else if(abs(100-sum)==abs(100-sum-a[i+1]))
{
cout<<sum+a[i+1];
break;
}
}
else if(i==9)
cout<<sum;
}
}
