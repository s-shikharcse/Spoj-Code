#include<stdio.h>
#define MAX 200

int fact(int ,int *,int);

int main()
{
int i,t,n;
scanf("%d",&t);


while(t--)
{
int a[MAX],size;
scanf("%d",&n);
a[0]=1;
size=1;
for(i=2;i<=n;i++)
{
size=fact(i,a,size);
}
for(i=size-1;i>=0;i--)
printf("%d",a[i]);
printf("\n");
}
}

int fact(int x,int *a,int ssize)
{
int i,carry=0;
for(i=0;i<ssize;i++)
{
a[i]=((a[i]*x)+carry)%10;
carry=((a[i]*x)+carry)/10;
}

while(carry)
{
a[ssize]=carry%10;
carry/=10;
ssize++;
}
return ssize;
}
