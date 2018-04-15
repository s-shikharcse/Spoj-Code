#include <stdio.h>
#include<iostream>
typedef unsigned long long int lli;
using namespace std;

//lli mem[100000] = {0};
void multiply(lli F[2][2], lli M[2][2],lli);
 
void power(lli F[2][2], lli n,lli);
 
lli fib(lli n,lli mod)
{
  lli F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1,mod);
  return F[0][0];
}
 

void power(lli F[2][2], lli n,lli mod)
{
  if( n == 0 || n == 1)
      return;
  lli M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2,mod);
  multiply(F, F,mod);
 
  if (n%2 != 0)
     multiply(F, M,mod);
}
 
void multiply(lli F[2][2], lli M[2][2],lli mod)
{
  lli x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%mod;
  lli y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%mod;
  lli z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%mod;
  lli w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%mod;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
lli pwr(lli x, lli y){
	lli temp;
	if(y==0)
		return 1;
	temp = pwr(x,y/2);
	if(y%2==0)
		return temp*temp;
	else
		return x*temp*temp;
} 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli t,n,m,couples,mod;
  cin>>t;
  while(t--){
    cin>>n>>m;
    mod = pwr(2,m);
  	couples = fib(n+1,mod);
  //	cout<<"couples : "<<couples<<endl;
  	cout<<couples%mod<<endl;

  }

  return 0;
}