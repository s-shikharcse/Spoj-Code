#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t,ng,nm;
cin>>t;
while(t--)
{
cout<<endl;
cin>>ng>>nm;
int *strength_god=new int[ng];
int *strength_mech=new int[nm];

for(int i=0;i<ng;i++)
cin>>strength_god[i];

for(int i=0;i<nm;i++)
cin>>strength_mech[i];

int *max_god=max_element(strength_god,strength_god+ng);
int *max_mech=max_element(strength_mech,strength_mech+nm);

if(*max_god>=*max_mech)
cout<<"Godzilla"<<endl;
else if(*max_god<*max_mech)
cout<<"MechaGodzilla"<<endl;
else
cout<<"uncertain"<<endl;
}
}
