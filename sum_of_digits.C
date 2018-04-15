#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int t;
cin>>t;
char x[55];
while(t--)
{
cin>>x;
int i,sum=0;
int length=strlen(x);
for(i=0;i<length;i++)
{
sum+=x[i]-48;
}
cout<<sum<<endl;
}
}
