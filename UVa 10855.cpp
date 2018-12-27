#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{


    int n,i,j,N,l,k,x,y,f1,f2,f3,f4,c1,c2,c3,c4;
    cin>>N>>n;

while(n && N)
{
    c1=0;c2=0;c3=0;c4=0;
    string sar[N],tar[n];
    for(i=0;i<N;i++)
    {
        cin>>sar[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>tar[i];
    }

    for(i=0;i<=N-n;i++)
    {
        for(j=0;j<=N-n;j++)
        {
            f1=1;f2=1;f3=1;f4=1;
            for(k=0;k<n;k++)
                for(l=0;l<n;l++)
                    if(sar[i+k][j+l]!=tar[k][l]){f1=0;k=n;break;}
            for(k=0;k<n;k++)
                for(l=n-1;l>=0;l--)
                    if(sar[i+k][j+(n-l-1)]!=tar[l][k]){f2=0;k=n;break;}
            for(k=n-1;k>=0;k--)
                for(l=n-1;l>=0;l--)
                    if(sar[i+(n-k-1)][j+(n-l-1)]!=tar[k][l]){f3=0;k=-1;break;}
            for(k=n-1;k>=0;k--)
                for(l=0;l<n;l++)
                    if(sar[i+(n-k-1)][j+l]!=tar[l][k]){f4=0;k=-1;break;}

            c1+=f1;c2+=f2;c3+=f3;c4+=f4;
        }
    }
    cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
    cin>>N>>n;
}


	return 0;
}
