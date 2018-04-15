 #include<iostream>
 using namespace std;
 
 int main()
 {
 int t,n,w;
 cin>>t;
 while(t--)
 {
 w=0;
 cin>>n;
 if(n%2==0)
 {
 if(n==2)
 cout<<"DWON "<<1<<endl;
 else
 {
  w=n*n;
  for(int i=n/2+1;i>=2;i--)
  w=w-i;
  if(w>2) cout<<"DWON "<<w-1<<endl;
  else cout<<"DDOWN"<<endl;
 }
 }
 else
 {
 w=n*n+1;
 w=w-((n+(n/2))+1);
 for(int i=((n+(n/2))+1)-n-1;i>=2;i--)
 w=w-i;
 if(w>2) cout<<"DWON "<<w-1<<endl;
 else cout<<"DDOWN"<<endl;
 }
 
 }
 
 }
 
