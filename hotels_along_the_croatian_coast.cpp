#include<iostream>
using namespace std;
int max_subarray(int b[], int size, int max_given)
 {
 	int max_so_far,max_ending_here;
 	max_so_far=0;
 	max_ending_here=0;
 	for(int i=0;i<size;i++)
 	{
 		max_ending_here+=b[i];
 		if(max_ending_here>max_given)
 		max_ending_here=0;
 		else if(max_ending_here>max_so_far)
 		max_so_far=max_ending_here;
 		
 	}
 	return max_so_far;	
 }
int main(){
	int n,m;
	cin>>n>>m;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];

	cout<<max_subarray(a,n,m);	
}
