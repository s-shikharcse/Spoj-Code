#include<iostream>
using namespace std;

int main()
{
int t;
unsigned long long int n,rooms,floor,cards;
cin>>t;
while(t--)
{
cards=0;
rooms=0;
floor=0;
cin>>n;
rooms=(n/2.0)*(2*n+2);	
floor=((n-1)*n)/2.0;
cards=(rooms+floor)%1000007;
cout<<cards<<endl;
}
}

