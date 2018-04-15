#include<iostream>
using namespace std;

int main()
{
	int t,n,m,max_student;
	cin>>t;
	for(int j=1;j<=t;j++){
    max_student=0;
    cin>>n>>m;
    int *working = new int[m];
    for(int i=0;i<m;i++)
    {
    	cin>>working[i];
    } 
    for(int i=0;i<m;i++)
    {
    	if((working[i]==1)&&(working[i+1]!=2))
        max_student+=2;
        else if((working[i]==1)&&(working[i+1]==2))
        max_student+=1;	
        else if((working[i]==n)&&(working[i]-working[i-1]==1))
        max_student+=1;
        else if((working[i]==n)&&(working[i]-working[i-1]!=1))
        max_student+=2;
        else if((working[i]==n)&&(working[i]-working[i-1]==2))
        max_student+=1;	
        else if((working[i+1]-working[i]==1)&&(working[i]-working[i-1]!=1))
        max_student+=2;
        else if((working[i]-working[i-1]==1)&&(working[i+1]-working[i]!=1))
        max_student+=2;
        else if((working[i]-working[i-1]==1)&&(working[i+1]-working[i]==1))
        max_student+=1;	
        else if((working[i]-working[i-1]==2)&&(working[i+1]-working[i]==1))
        max_student+=1;	
        else if(working[i]-working[i-1]==2)
        max_student+=2;	
        else
        max_student+=3;        	
    }
        cout<<"Case "<<j<<": "<<max_student<<endl;	 
	}
}