#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll dist[200][200];
int n,m;
int moves_x[]={-1,0,1},moves_y[]={-1,0,1};
void bfs(pair<int,int> point)
{
	queue< pair<int,int> >q;
	q.push(point);
	while(q.empty()==false)
	{
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int i=0;i<3;i++)
		{
			for(int j=0;i<3;j++)
			{
				if((abs(moves_x[i])!=abs(moves_y[j])) and x+moves_x[i]>=0 and x+moves_x[i]<n and y+moves_y[j]>=0 and y+moves_y[j]<m and dist[x+moves_x[i]][y+moves_y[j]]>1+dist[x][y])
				{
					dist[x+moves_x[i]][y+moves_y[j]]=1+dist[x][y];
					q.push(make_pair(x+moves_x[i],y+moves_y[j]));
				}
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector< pair<int,int> >v;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			char val[m];
			scanf("%s",&val);
			for(int j=0;j<m;j++)
			{
				dist[i][j]=9999999;
				if(val[j]-'0'==1)
				{
					dist[i][j]=0;
					v.push_back(make_pair(i,j));
				}
			}
		}
		for(int i=0;i<v.size();i++)
		bfs(v[i]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout<<dist[i][j]<<" ";
				cout<<endl;
		}
	}
}
