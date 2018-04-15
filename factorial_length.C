#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
long long int i,n;
float length;
while(t--)
{
length=0;
cin>>n;
if((n==1)||(n==0))
cout<<1<<endl;
else
{
for(i=1;i<=n;i++)
{
length=length+log10 (i);
}
cout<<ceil(length)<<endl;
}
}


}
