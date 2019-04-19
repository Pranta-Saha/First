#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int arr[100000];

int findd(int a)
{
        if(arr[a]==a) return a;
        return arr[a]=findd(arr[a]);
}

unionn(int u,int v)
{
        arr[findd(v)]=u;
}

int main()
{
        //ios_base::sync_with_stdio(false);
        //cin.tie(nullptr);
	//cout.tie(nullptr);
	//cerr.tie(nullptr);
FRO
        int n,i,j,t,u,v;
        char c;
        scanf("%d",&t);
        while(t--)
        {
                scanf("\n%d\n",&n);
                for(i=1;i<=n;i++)
                {
                        arr[i]=i;
                }
                string str;
                int success=0,unsuccess=0;
                while(1)
                {
                        if(!getline(cin,str) || str.empty()) break;
                        //sscanf(str.c_str(),"%c %d %d",&c,&u,&v);

                        if(c=='c') unionn(u,v);
                        else
                        {
                                if(findd(u)==findd(v)) success++;
                                else unsuccess++;
                        }
                }
                //cout<<success<<','<<unsuccess<<endl<<endl;
                if(t) printf("\n");
                printf("%d,%d\n",success,unsuccess);
        }
	return 0;
}
