#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

class node{
public:
        int at,cst;
        node(int a,int c)
        {
                at=a;
                cst=c;
        }
};

bool operator<(node a, node b)
{
        return a.cst>b.cst;
}

vector<int>adj[102];
bool visited[102];
int cost[102],sum;


void dijkstra(int src)
{
        priority_queue<node>pq;
       cost[src]=0;
       pq.push(node(src,0));

       while(!pq.empty())
       {
               node prnt=pq.top();
               pq.pop();
               sum+=prnt.cst;

               visited[prnt.at]=true;
               int len=adj[prnt.at].size();
               for(int i=0;i<len;i++)
               {
                       int child=adj[prnt.at][i];
                       if(visited[child]) continue;
                       if(cost[child]>cost[prnt.at]+1)
                       {
                               cost[child]=cost[prnt.at]+1;
                               pq.push(node(child,cost[child]));
                       }
               }
       }

}

int main()
{
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);
        map<int,int>mp;

        int n,i,j,cnt=0,u,v,cs=1;

        while(1)
        {
                for(i=0;i<101;i++)
                        adj[i].clear();
                cnt=0;
                mp.clear();
                cin>>u>>v;
                if(u==0 && v==0) break;
                while(u&&v)
                {
                       if(mp.find(u)==mp.end()) mp[u]=++cnt;
                       if(mp.find(v)==mp.end()) mp[v]=++cnt;
                       adj[mp[u]].push_back(mp[v]);
                       cin>>u>>v;
                }
                sum=0;
                for(i=1;i<=cnt;i++)
                {
                        memset(cost,10000,sizeof(cost));
                        memset(visited,false,sizeof(visited));
                        dijkstra(i);
                }
                double tmp=(double)sum/(double)(cnt*(cnt-1));
                cout<<"Case "<<cs++<<": average length between pages = "<<fixed<<setprecision(3)<<tmp<<" clicks"<<endl;

        }



	return 0;
}
