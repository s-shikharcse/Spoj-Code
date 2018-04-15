//code is same for PR003004 and CPCRC1C
#include<iostream>
#include<math.h>
using namespace std;

long long int sumOfDigits(long long int n)
{
    if (n<10)
      return n*(n+1)/2;
 
 
long long int d = log10(n);
 
long long int *a = new long long int[d+1];
    a[0] = 0, a[1] = 45;
    for (long long int i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));

    long long int p = ceil(pow(10, d));
    long long int msd = n/p;
 
    return msd*a[d] + (msd*(msd-1)/2)*p +  
           msd*(1+n%p) + sumOfDigits(n%p);
}
 
int main()
{
long long int t,d,sum,aa,a,b,result;
cin>>t;
while(t--)
{
sum=0;
    cin>>a>>b;
   
    aa=a;
    while(aa!=0)
    {
    d=aa%10;
    sum+=d;
    aa=aa/10;
    }
    
    result=sumOfDigits(b)-sumOfDigits(a)+sum;
    cout<<result<<endl;
 
}   return 0;
}
