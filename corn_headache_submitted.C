#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int t,seeds;
char *r,*s,*h;
float rr,ss,hh,ll,CSA;
char str[2000];
scanf("%d",&t);

while(t--)
{
scanf("%s",str);
r=strtok(str,"e");
s=strtok(NULL,"e");
h=strtok(NULL,"\0");
sscanf(r,"%f",&rr);
sscanf(s,"%f",&ss);
sscanf(h,"%f",&hh);

ll=sqrt(rr*rr+hh*hh);
CSA=3.1415*rr*ll;
seeds=ceil(CSA*ss);
printf("%d\n",seeds);
}
}	
