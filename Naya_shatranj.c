#include<stdio.h>
int main()
{
int a,b,t, ni;
cin>>t;
while(t--)
{
cin>>ni;
a=ni;
b=ni;
if(((a>=2)&&(b>=1))||((a>=1)&&(b>=2)))
cout<<0<<endl;
else
cout<<1<<endl;
}

}
