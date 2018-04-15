#include<bits/stdc++.h>
using namespace std;

const int MAX = 1005;

int n,m;
char grid [MAX][MAX];
int dist [MAX][MAX];

struct point{
	int x,y;
};

int X[ ] = {0,0,-1,1};
int Y[ ] = {-1,1,0,0};

bool check(point t){
	if((t.x>=0 and t.x<n) and (t.y>=0 and t.y<m) and(grid[t.x][t.y] != '*'))
	return true;
	else 
	return false;		
}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

		point start,end;
		int count_c = 0;
		cin>>m>>n;
		for(int i=0;i<n;i++)
			cin>>grid[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				dist[i][j] = 0;
				if((grid[i][j]=='C')and (count_c==0)){
					start.x = i;
					start.y = j;
					dist[i][j] = 1;
					count_c++;
				}
				if((grid[i][j]=='C') and (count_c==1)){
					end.x = i;
					end.y = j;
					count_c++;
				}
			}
		}

		queue<point>q;
		q.push(start);
		while(!q.empty()){
			point temp = q.front();
			q.pop();
			for(int i=0;i<4;i++){
				point copy = temp;
				copy.x += X[i];
				copy.y += Y[i];
				while(check(copy)){
					if(dist[copy.x][copy.y] == 0){
						dist[copy.x][copy.y] = dist[temp.x][temp.y]+1;
						q.push(copy);
					}
					else if(dist[copy.x][copy.y] != dist[temp.x][temp.y]+1)
						break;
					copy.x += X[i];
					copy.y += Y[i];
				}  	
			}
		}
		cout<<dist[end.x][end.y]-1<<"\n";
}