#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void dfs(int u,const vector<vector<int>>&g,vector<bool>&v){v[u]=true;cout<<u<<" ";for(int x:g[u])if(!v[x])dfs(x,g,v);}
int main(){int n,m,d;cout<<"Vertices (0 to n-1): ";cin>>n;if(n<=0)return 0;cout<<"Directed? (1=yes, 0=no): ";cin>>d;vector<vector<int>>g(n);cout<<"Edges: ";cin>>m;for(int i=0,u,v;i<m;i++){cin>>u>>v;if(u<0||u>=n||v<0||v>=n){cout<<"Invalid edge skipped\n";continue;}g[u].push_back(v);if(!d)g[v].push_back(u);}int s;cout<<"Start vertex: ";cin>>s;if(s<0||s>=n)return 0;vector<bool>seen(n,false);queue<int>q;q.push(s);seen[s]=true;cout<<"BFS: ";while(!q.empty()){int u=q.front();q.pop();cout<<u<<" ";for(int v:g[u])if(!seen[v])seen[v]=true,q.push(v);}cout<<"\nDFS: ";fill(seen.begin(),seen.end(),false);dfs(s,g,seen);cout<<"\n";}