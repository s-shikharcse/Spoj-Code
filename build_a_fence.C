/*Concept circle has the max Area and Rectangle has the max Perimeter

Here we will use the concept that "cr. of semicircle"=length;
Hence r=1/2pi;
and "Area of semicircle" = pi*r*r;
hence the combined formula is A=l/2pi;
*/

//Accepted solution

/*#include<stdio.h>

int main()
{
int l;
float max_area;
while(1)
{
scanf("%d",&l);
if(l==0)
break;

max_area = (l*l)/(2*3.14159); 
printf("%0.2f\n",max_area);
}
}*/

#include<iostream>
using namespace std;

int main()
{
int l;
float max_area;
while(1)
{
cin>>l;

if(l==0)
break;

max_area = l/(2*3.14159); 
cout.precision(2);
cout<<fixed<<max_area<<endl;
}
}
