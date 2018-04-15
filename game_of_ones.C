#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
cin>>t;
int n;
long long int i,numbers,ones;
while(t--)
{
cin>>n;
numbers=pow(2,n-1);
ones=numbers;
for(i=1;i<n;i++)
ones+=numbers/2;
cout<<numbers<<" "<<ones<<endl;
}

}

