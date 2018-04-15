#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int LLI ;
 
int main()
{
LLI n,c,i,j,*dwarf,m,*count_color;
long long int*max_color;
float k;
cin>>n>>c;
dwarf = new LLI [n];
count_color = new LLI [c];

for(i=0;i<n;i++)
cin>>dwarf[i];

cin>>m;
LLI pic[m][2];

for(i=0;i<m;i++)
{
cin>>pic[i][0]>>pic[i][1];
for(j=1;j<=c;j++)
{
count_color[j-1] = count(dwarf+pic[i][0]-1,dwarf+pic[i][1],j);

//cout<<count_color[j-1]<<" ";
}
//cout<<endl;
max_color = max_element(count_color,count_color+c);
k = pic[i][1] - pic[i][0] +1;
//cout<<k<<endl;
if(*max_color>(k/2.0))
cout<<"yes "<<max_color-count_color+1<<endl;
else
cout<<"no"<<endl;
}

}

