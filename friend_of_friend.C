#include<iostream>
using namespace std;

int main()
{
int n,m;
cin>>n;
int **his_friend,bob_friend[n];
for(int i=0;i<n;i++)
{
cin>>bob_friend[i];
cin>>m;
*his_friend=new int[n];
for(int j=0;j<m;j++)
{
his_friend[j]=new int [m];
cin>>his_friend[i][j];
}
}
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
 for(int k=0;k<n;k++)
 {
 if(his_friend[i][j]!=bob_friend[k])
 count++;
 }
}
}
}
