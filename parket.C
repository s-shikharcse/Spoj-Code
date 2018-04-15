#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int sq,chk,r,b,w,l=1;
cin>>r>>b;
sq=r*r+16-8*r-16*b;
chk=((r+4)-(sqrt(sq)))/4;
l=chk;
w=(r+b)/l;
if(w>l)
cout<<w<<" "<<l<<endl;
else
cout<<l<<" "<<w<<endl;
}
