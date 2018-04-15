#include<iostream>
using namespace std;

int main()
{
int a,b,c,d,e,w;
cin>>a>>b>>c>>d>>e>>w;
d+=2*e;
c+=2*d;
b+=2*c;
a+=2*b;

if((w%2!=0)||(a<w))
cout<<"NO"<<endl;
else if(a>=w)
cout<<"YES"<<endl;
}

