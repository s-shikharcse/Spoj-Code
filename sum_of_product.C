#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int t;
unsigned long long int n,i,quotient,answer;

cin>>t;
while(t--)
{
answer=0;
cin>>n;
for(i=1;i<=ceil(sqrt(n));i++)
{
quotient=n/i;
answer+=i*quotient;
}
answer=((answer+((n*(n+1))/2)-((i*(i-1))/2))%(1000000007));
cout<<answer<<endl;
}


}
