#include<iostream>
using namespace std;
int main()
{
int d,t,k;
cin>>t;
while(t--)
{
cin>>k;
int reverse,num=k+1;
int s=num;
while(1)
{
reverse=0;
while(s!=0)
{
d=s%10;
reverse=reverse*10+d;
s=s/10;
}
if(reverse==num)
{
cout<<reverse<<endl;
break;
}
else
{
num++;
s=num;
}

}
}
}
