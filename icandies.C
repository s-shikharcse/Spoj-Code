#include<iostream>
using namespace std;  //25 187 49

int main()
{
int t;
unsigned long int n,j;
cin>>t;
for(int i=0;i<t;i++)
{
int flag=0;
cout<<endl;
cin>>n;

if(n<8)
{
cout<<"Case "<<i+1<<": -1"<<endl;
continue;
}
else
{
 n=n-5;
 if(n%3==0)
 {
 cout<<"Case "<<i+1<<": "<<n<<endl;
 flag=1;
 }
 else
 {
    while(n>5)
    {
      n=n-5;
    if(n%3==0)
    {
    cout<<"Case "<<i+1<<": "<<n<<endl;
    flag=1;
    break;
    }
    }
 } 
}
if(flag==0)
cout<<"Case "<<i+1<<": -1"<<endl;

}
}
