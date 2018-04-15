#include<iostream>
using namespace std;

int main()
{
int n,t;
cin>>n>>t;
int a[n][n],b[n][n];
int fill=1;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
a[i][j]=fill;
b[i][j]=a[i][j];
fill++;
}
}
int loop=t%4;
while(loop)
{
int column=n-1;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
b[j][column]=a[i][j];
}
column=column-1;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
a[i][j]=b[i][j];
}
}
loop--;
}
if(t%4==0)cout<<"Atef"<<endl;
else if(t%4==1)cout<<"Sameh"<<endl;
else if(t%4==2)cout<<"Ameen"<<endl;
else if (t%4==3)cout<<"Shafeek"<<endl;

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
}
