#include<iostream>
#include<algorithm>
using namespace std;

long long int gcd(int A,int B)
{
	if(B==0)
		return A;
	else
		gcd(B,A%B);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n=1;
	long long int *f = new long long int[20000];
	fill(f,f+20000,0);

	while(1)
	{
		long long int g=0;
		cin>>n;
		if(n==0)
			break;
		if(f[n]!=0)
			cout<<f[n]<<endl;
		else
	    {
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
				g+=gcd(i,j);
		}
		f[n] = g;
		cout<<g<<endl;
	    }
	}
}
