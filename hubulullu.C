#include<iostream>
using namespace std;

int main()
{
int t,status;
unsigned int n;
cin>>t;
while(t--)
{
cin>>n>>status;
if(status==0)
cout<<"Airborne wins.\n";
else
cout<<"Pagfloyd wins.\n";
}
}
