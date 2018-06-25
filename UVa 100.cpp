#include<bits/stdc++.h>
using namespace std;

int arr[100002];

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k,n,mx,mn,mxcnt=INT_MIN,cnt;

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        mx=max(i,j);
        mn=min(i,j);
        mxcnt=INT_MIN;

        for(int t=mn;t<=mx;t++)
        {
            n=t; cnt=0;

            while(n!=1)
            {
                if(n&1) n=3*n+1;
                else n=n/2;
                cnt++;
            }

            mxcnt=max(cnt,mxcnt);
        }

        cout<<i<<" "<<j<<" "<<mxcnt+1<<endl;

    }
    return 0;
}
