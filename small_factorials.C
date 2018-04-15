#include<iostream>
using namespace std;

#define MAX 200

int multiply(int, int *, int);

int main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a[MAX],size;
a[0]=1;
size=1;

for(int i=2;i<=n;i++)
{
size=multiply(i,a,size);
}

for(int i=size-1;i>=0;i--)
cout<<a[i];
cout<<endl;
}

}

int multiply(int x,int *a, int size)
{
int carry=0;
for(int i=0;i<size;i++)
{
int product=a[i]*x+carry;
a[i]=product%10;
carry=product/10;
}

while(carry)
{
a[size]=carry%10;
carry/=10;
size++;
}
return size;
}
