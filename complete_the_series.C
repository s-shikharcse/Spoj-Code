#include<iostream>
#include<math.h>

#define ULLI unsigned long long int
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--)
{
ULLI k,j,n=1,N,chk,a,p,q,s,r=1,R;
cin>>p>>q>>s;

while(1)
{
chk=(q*r*r*r*r*r)-(s*r*r*r)+(s*r*r)-p;
if(chk==0)
break;
r++;
}

a=p/(r*r);
N=a;
R=r;
while(N!=s)
{
N+=a*R;
R=R*r;
n++;
}
cout<<n<<endl;
cout<<a<<" ";
R=r;
for(j=2;j<=n;j++)
{
cout<<a*R<<" ";
R*=r;
}
cout<<endl;
}
}
