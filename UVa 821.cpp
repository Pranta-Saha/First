#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int main()
{
      cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	map<int,int>mp;


      int n,i,j,w[102][102],k,tmp,u,v,cs=1;
      while(1)
      {
              mp.clear();
              for(i=1;i<=100;i++)
                        for(j=1;j<=100;j++)
                                w[i][j]=1000;
              for(i=1;i<=100;i++)
                        w[i][i]=0;
              tmp=0; int cnt=1;
              cin>>u>>v;
              if(u==0 && v==0 ) break;
              while(u && v)
              {
                      if(mp.find(u)==mp.end()) mp[u]=cnt++;
                      if(mp.find(v)==mp.end()) mp[v]=cnt++;
                      w[mp[u]][mp[v]]=1;
                      cin>>u>>v;
              }
              cnt--;

              for(k=1;k<=cnt;k++)
                        for(i=1;i<=cnt;i++)
                                for(j=1;j<=cnt;j++)
                                        if(w[i][j]> w[i][k]+w[k][j] )
                                                w[i][j]=w[i][k]+w[k][j];
              for(i=1;i<=cnt;i++)
                        for(j=1;j<=cnt;j++)
                                if(w[i][j]<100) tmp+=w[i][j];
                cnt=cnt*(cnt-1);
                double tmp2=(double)tmp/(double)cnt;
                cout<<"Case "<<cs++<<": average length between pages = "<<fixed<<setprecision(3)<<tmp2<<" clicks"<<endl;


      }
	return 0;
}

