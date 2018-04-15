#include <iostream>
using namespace std;

int main()
{
 unsigned long long int i,n,sum,avg;
 while(1)
 {  
 	cin>>n;
 	if(n==-1)
 	break;
 	int a[n];
 	unsigned long long int count=0;
 	sum=0;
 for(i=0;i<n;i++)
 {
 	cin>>a[i];
 	sum=sum+a[i];
 }
 
 if((sum%n)==0)
 {
 avg=sum/n;
 for(i=0;i<n;i++)
 {
 	while(a[i]<avg)
 	{
 	        a[i]=a[i]+1;
 	        count++;
 	}
  }
 cout<<count<<endl;
 }
 else
 {
 	cout<<"-1"<<endl;
 }
}
}

