#include<iostream>
#include<math.h>
using namespace std;

int main()
{
for(unsigned long long int i=1;i<=200000000000000;i++)
{
unsigned long long int d=pow(i,3);
if((d%1000)==888)
cout<<i<<endl;
}

}
