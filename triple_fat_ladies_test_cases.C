#include<iostream>
using namespace std;

int main()
{
unsigned long long int t,i=1,count=0;
while(count!=2000000000000)
{
if((i*i*i)%1000==888)
cout<<i<<endl;
i++;
count++;
}

}
