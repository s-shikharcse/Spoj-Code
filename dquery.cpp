#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,q,i,j;
	cin>>n;
	int *a = new int[n];
	for(int k=0;k<n;k++)
		cin>>a[k];
	sort(a,a+n);
	cin>>q;
	for(int k=0;k<q;k++)
	{
		int count = 0;
		cin>>i>>j;
		for(int l=i-1;l<j;l++)
		{
			if(a[l]==a[l+1])
			{
				count++;
				l++;
			}

		}
		cout<<count<<endl;
	}
}