#include<iostream>
using namespace std;

int main()
{
unsigned long long int t,n;
cin>>t;
while(t--)
{
cout<<endl;
cin>>n;
unsigned long long int *a=new unsigned long long int[n];
unsigned long long int sum=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
sum=(sum+a[i])%n;
}
if(sum%n==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

}
