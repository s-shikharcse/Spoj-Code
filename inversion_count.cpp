#include<iostream>
using  namespace std;
#define ll long long int
int main()
{
ll t,n;
cin>>t;
while(t--)
{
int count=0;
cin>>n;
ll *a=new ll [n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
			count++;
	}
}
cout<<count<<endl;
}
} 