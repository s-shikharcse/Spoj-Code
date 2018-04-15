#include<iostream>
using namespace std;

int main()
{
int t,r,c;
cin>>t;
int a[15];
a[0]=1;

for(int i=1;i<15;i++)
a[i]=i*a[i-1];

while(t--)
{
int right,down,answer;
cin>>r>>c;
right=c-1;
down=r-1;
answer=((a[right+down])/(a[right]*a[down]));
cout<<answer<<endl;
}

}
