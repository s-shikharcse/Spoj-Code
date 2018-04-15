#include<stdio.h>
int main()
{
float sum,c;
while(1)
{
sum=0;
scanf("%f",&c);
if(c==0.00)
break;
int i=2;
while(1)
{
sum+=1.0/i;
if(sum>=c)
{
printf("%d card(s)\n",i-1);
break;
}
i++;
}
}
}
