#include<iostream>
#include<string>
using namespace std;

int main()
{
int n;
string s;
while(1)
{
cin>>n;
if(n==0)
break;
cin>>s;
int length=s.length();
int row=length/n;
char c[row][n];
int k=0;
for(int i=0;i<row;i++)
{
if(i%2==0)
{
for(int j=0;j<n;j++)
c[i][j]=s[k++];
}
else
{
for(int j=n-1;j>=0;j--)
c[i][j]=s[k++];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<row;j++)
cout<<c[j][i];
}
cout<<endl;


}
}
