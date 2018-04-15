#include<stdio.h>
#include<math.h>
int main()
{
int t;
float r,s,h,seeds;
float result,l;
scanf("%d",&t);
while(t--)
{
scanf("%fe%fe%f",&r,&s,&h);
l=sqrt((r*r)+(h*h));
printf("%f\n%f\n%f\n",r,s,h);
result=3.1415*r*l;
seeds=ceil(result*s);
printf("%f\n",seeds);
}

}
