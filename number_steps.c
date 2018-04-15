#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int a[n][2];
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i][0],&a[i][1]);
if(a[i][0]==a[i][1])
{
if(a[i][0]%2==0)
printf("%d\n",2*a[i][0]);
else
printf("%d\n",2*a[i][0]-1);
}
else if(a[i][0]-a[i][1]==2)
{
if(a[i][0]%2==0)
printf("%d\n",2*a[i][0]-2);
else
printf("%d\n",2*a[i][1]-1+2);
}
else 
printf("No Number\n");

}

}

