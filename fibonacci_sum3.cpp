#include <stdio.h>
#include<iostream>
typedef long long int lli;
#define MOD 1000000007
using namespace std;

lli mem[100000] = {0};
void multiply(lli F[2][2], lli M[2][2]);
 
void power(lli F[2][2], lli n);
 
lli fib(lli n)
{
  lli F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 

void power(lli F[2][2], lli n)
{
  if( n == 0 || n == 1)
      return;
  lli M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(lli F[2][2], lli M[2][2])
{
  lli x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%MOD;
  lli y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%MOD;
  lli z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%MOD;
  lli w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%MOD;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  lli t,n,m,sum;
  cin>>t;
  while(t--){
    cin>>n>>m;
    sum = 0;
    for(lli i=n;i<=m;i++){
      if((i<100000)and(mem[i]!=0)){
        sum += mem[i];
      }
      else{
        lli step = fib(i);
        if(i<100000)
          mem[i] = step;
        sum += step;  
      }
      sum = sum%MOD;
    }
    cout<<sum%MOD<<endl;
  }
  return 0;
}