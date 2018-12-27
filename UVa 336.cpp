#include <bits/stdc++.h>
using namespace std;

vector<int>adj[100];
set<int>nodes;
set<int>::iterator it;
bool visited[100];
queue<int>que;
int dist[100];
map<string,int>s2i;

void bfs(int src, int depth)
{
    visited[src]=true;
    if(depth==0) return;
    que.push(src);

    while(!que.empty())
    {
        int prnt=que.front();
        que.pop();

        int sz=adj[prnt].size();
        for(int i=0; i<sz;i++)
        {
            int child=adj[prnt][i];
            if(visited[child]==0)
            {
                visited[child]=1;
                dist[child]=dist[prnt]+1;
                if(dist[child]<depth) que.push(child);
            }
        }
    }
}

int main()
{
//freopen("in.txt","r",stdin);

    int n,i,j,depth,tt=0;
    string uu,vv,src;

    while(cin>>n && n)
    {
        s2i.clear();
        //i2s.clear();
        nodes.clear();
        int num=1;
        while(n--)
        {
            cin>>uu>>vv;
            if(s2i.find(uu)==s2i.end())
            {
                s2i[uu]=num;
                //i2s[num]=uu;
                num++;
            }
            if(s2i.find(vv)==s2i.end())
            {
                s2i[vv]=num;
                //i2s[num]=vv;
                num++;
            }
            adj[s2i[uu]].push_back(s2i[vv]);
            if(uu!=vv) adj[s2i[vv]].push_back(s2i[uu]);
            nodes.insert(s2i[uu]);
            nodes.insert(s2i[vv]);
        }
        while(cin>>src>>depth && (src!="0"||depth))
        {
            memset(visited,0,sizeof(visited));
            memset(dist,0,sizeof(dist));

            bfs(s2i[src],depth);
            int cnt=0;
            for(it=nodes.begin();it!=nodes.end();it++)
            {
                if(visited[*it]) cnt++;
            }

            cout<<"Case "<<++tt<<": "<<nodes.size()-cnt<<" nodes not reachable from node "<<src<<" with TTL = "<<depth<<'.'<<endl;

        }

        while(!nodes.empty())
        {
            it=nodes.begin();
            adj[*it].clear();
            nodes.erase(it);

        }

    }



	return 0;
}

