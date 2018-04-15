#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int t,no_of_friends;
unsigned int no_of_stamps,collection;
cin>>t;

for(int j=0;j<t;j++)
{
collection=0;
cin>>no_of_stamps;
cin>>no_of_friends;
int *a=new int[no_of_friends];

for(int i=0;i<no_of_friends;i++)
cin>>a[i];

sort(a,a+no_of_friends);

int flag=0,count=0;
for(int i=no_of_friends-1;i>=0;i--)
{
collection+=a[i];
count++;
if(collection>=no_of_stamps)
{
flag=1;
break;
}
}

cout<<"Scenario #"<<j+1<<":"<<endl;
if(flag==1)
cout<<count<<endl;
else
cout<<"impossible"<<endl;

cout<<endl;
}




}

