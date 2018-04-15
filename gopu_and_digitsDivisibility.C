#include<iostream>
using namespace std;

int main(){

long int t,sum;
unsigned long long int nn,n;
cin>>t;
for(long int i=0;i<t;i++)
{
cin>>n;
while(1)
{
sum=0;
nn=n;
while(nn!=0)
{
int d=nn%10;
sum+=d;
nn=nn/10;
}
if(n%sum==0)
{
cout<<n<<endl;
break;
}
else
n++;
}
}

}
