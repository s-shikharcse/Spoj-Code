#include<iostream>
using namespace std;
int main()
{
	int t , n  , k=0 , num=0;
	long  long unsigned int sum=0 , count=0 ;
	cin>>t;
	num=t;
	int * brr= new int[t];
	while(t>0)
	{
		cin>>n;
		 int * arr= new int [n];
		
		for(int i=0 ; i<n ; i++)
		{
			cin>>arr[i];
			
		}
		
		for(int j=0 ; j<n ; j++)
		{
			sum= sum + arr[j];
			
		}
		
		
		if(sum%n==0)
		count++;
	
		brr[k]=count;
		sum=0;
		k++;
		t--;
		count=0;
	}
	cout<<"\n";
	for(int a=0 ; a<num ; a++)
	{
		if(brr[a]==1)
		cout<<"YES";
		else 
		cout<<"NO";
		cout<<"\n";
		
	}
	
	
	
	return 0;
	
	
}
