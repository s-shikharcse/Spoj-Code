#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
int n,k,s;
long int no_of_boxes=0,screws_total=0;
cin>>n>>k>>s;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n,greater<int>());

for(int i=0;i<n;i++)
{
screws_total+=a[i];
no_of_boxes++;
if(screws_total>=(k*s))
break;
}
cout<<no_of_boxes<<endl;

}
