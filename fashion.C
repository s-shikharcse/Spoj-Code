#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int n,t,hotness,hot_sum;
cin>>t;
while(t--)
{
hot_sum=0;
cin>>n;
int *male=new int [n];
int *female=new int [n];
for(int i=0;i<n;i++)
cin>>male[i];
for(int i=0;i<n;i++)
cin>>female[i];
sort(male,male+n);
sort(female,female+n);
for(int i=0;i<n;i++)
{
hotness=male[i]*female[i];
hot_sum+=hotness;
}
cout<<hot_sum<<endl;
}

}

