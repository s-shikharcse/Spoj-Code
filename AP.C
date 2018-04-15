#include<iostream>
using namespace std;

/*we will make use of the following two formulas

s=(n*(a+l))/2
n=((l-a)/d)+1
s-->sum of the digits
a-->first term
l-->last term

*/

int main(){

int t;
cin>>t;
long long int a,i,n,d,term3,lastterm3,sum;
while(t--)
{
cin>>term3>>lastterm3>>sum;
n=((2*sum)/(term3+lastterm3));
d=((lastterm3-term3)/(n-3-3+1));
cout<<n<<endl;
a=term3-(2*d);
for(i=1;i<=n;i++)
{
cout<<a+(i-1)*d<<" ";
}
cout<<endl;
}

}
