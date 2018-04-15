#include<stdio.h>
#include<math.h>

long int calculate(long int );

int main()
{
long int x,result;
scanf("%ld",&x);
result=calculate(x);
printf("%ld",result);
}

long int calculate(long int x)
{
int flag;
long int i,f;
if((x==0)||(x%2!=0))
return 0;
else if(x==1)
return 1;
else if(x==2)
return 2;
else
{
f= calculate(2)+calculate(x/2);
return f;
}
}

