#include<iostream>
#include<algorithm>
using namespace std;

typedef unsigned long int ULI ;   

int main()
{
ULI n,i;
while(1)
{
cin>>n;
if(n==0)
break;
ULI *a=new ULI[n];
ULI *b=new ULI[n];
for(i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)
{
b[i]=find(a,a+n,i+1)-a+1;
}

if(equal(b,b+n,a))
cout<<"ambiguous"<<endl;
else
cout<<"not ambiguous"<<endl;

}
}
