#include<stdio.h>
#include<math.h>
int main()
{
int t;
int r,s,h,seeds;
float result,l;
scanf("%d",&t);
while(t--)
{
scanf("%de%de%d",&r,&s,&h);
l=sqrt((r*r)+(h*h));
printf("%d\n%d\n%d\n",r,s,h);
result=3.1415*r*l;
seeds=ceil(result*s);
printf("%d\n",seeds);
}

}
