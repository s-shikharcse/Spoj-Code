#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
#define SZ 100
const double pi = 3.1415;
double conv(char *str,int s,int e);
void parseDouble(char *str,int len,double &rad,double &seed,double &height){

 rad = seed = height = 0;
 int i = 0,pos=0;
 for(i = 0;str[i] != 'e';++i);
 rad=conv(str,0,i-1);
 pos = i+1;
 for(i = pos;str[i] != 'e';++i);

 seed =conv(str,pos,i-1);
 pos=i+1;
 height = conv(str,pos,len-1);
}
double conv(char *str,int s,int e){
 double l=0,r=0,den = 1.0;
 int i,dl,len = e-s+1,pos;
 for(pos = 0,i = s;pos < len && str[i] != '.';++i,++pos){l = l*10+(str[i]-'0');}
  i++;
  dl = len-pos-1;
  for(pos+=1;pos < len;++i,++pos){r = r*10+(str[i]-'0');}
  for(i = 0;i < dl;++i) den *= 10;
 l = l + (r/den);
 return l;
}
int main(){
 double r,s,h,sa,se;
 int tc;
 char str[SZ];
 cin>>tc;
 for(;tc;--tc){
  cin>>str;
  parseDouble(str,strlen(str),r,s,h);
  sa = pi * r * sqrt((h*h)+(r*r));
  cout<<(unsigned long long int)((sa*s)+1)<<endl;
 }
}
