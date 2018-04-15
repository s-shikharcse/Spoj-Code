#include<isotream>
#include<stdlib.h>
using namespace std;

int main()
{
	int n;
	float factor;
	cin>>n;
	int units[n-1][2];
	if(n==-1)
		exit(0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		cin>>units[i][j];
	}

  
	for(int i=0;i<n;i++)
	{
		factor=units[i][1]/float(units[i+1][1]);
		if(factor!=1)
			units[i+1][1]=factor*units[i+1][1];
	}

}