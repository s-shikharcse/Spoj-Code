#include<bits/stdc++.h>
using namespace std;
int largestArea(int arr[], int len)
{
int area[len]; //initialize it to 0
int n, i, t;
stack<int> St;  //include stack for using this #include<stack>
bool done;

for (i=0; i<len; i++)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = -1;
else
   t = St.top();
//Calculating Li
area[i] = i - t - 1;
St.push(i);
}

//clearing stack for finding Ri
while (!St.empty())
St.pop();

for (i=len-1; i>=0; i--)
{
while (!St.empty())
{
   if(arr[i] <= arr[St.top()])
   {
       St.pop();
   }
   else
       break;
}
if(St.empty())
   t = len;
else
   t = St.top();
//calculating Ri, after this step area[i] = Li + Ri
area[i] += t - i -1;
St.push(i);
}

long lint max = 0;
//Calculating Area[i] and find max Area
for (i=0; i<len; i++)
{
area[i] = arr[i] * (area[i] + 1);
if (area[i] > max)
   max = area[i];
}

return max;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);

  int hist[100005];
  while(true){
    int n,i;
    cin>>n;
    if(n==0) break;   

    for(int i=0;i<n;i++)
      cin>>hist[i];
    long long ans = largestArea(hist,n);
    cout<<ans<<"\n";
  }
}  