#include<iostream>
#include<math.h>
using namespace std;

int main()
{
unsigned long long int t,k;
cout.setf(ios::fixed);
cout.precision(0);
cin>>t;
while(t--)
{
cin>>k;
//for(k=1;k<=400;k++)
//{

if(k>=5)
cout<<(floor((k/4.0)-0.2));

if(k%4==1)
cout<<192<<endl;
else if(k%4==2)
cout<<442<<endl;
else if(k%4==3)
cout<<692<<endl;
else if(k%4==0)
cout<<942<<endl;
}
}

