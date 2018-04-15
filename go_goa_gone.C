#include<iostream>
using namespace std;

int main()
{
int p,money[8][2],temp[8][2];
long long int max_collection=0;
for(int i=0;i<8;i++)
{
cin>>money[i][0];
money[i][1]=0;
temp[i][0]=money[i][0];
temp[i][1]=0;
}
cin>>p;
int war[p][2];
for(int i=0;i<p;i++)
{
cin>>war[i][0]>>war[i][1];
}

for(int i=0;i<p;i++)
{
int x=war[i][0]-1;
int y=war[i][1]-1;
if(money[x][0]>money[y][0])
{
if((money[x][1]==0)&&(money[y][1])==0)
{
money[x][1]=1;
money[y][1]=-1;
//temp[y][0]=0;
}
else if(money[x][1]==-1) 
{

}

}
else
temp[war[i][1]-1]=0;
}

for(int i=0;i<8;i++)
max_collection+=temp[i];

cout<<max_collection<<endl;
}
