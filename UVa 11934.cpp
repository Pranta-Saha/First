#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,j,a,b,c,d,l;
    cin>>a>>b>>c>>d>>l;

    while(a||b||c||d||l)
    {
        int cnt=0;
        for(i=0;i<=l;i++)
        {
            int fun=(a*i*i)+(b*i)+c;
            if(fun%d==0) cnt++;
        }
        cout<<cnt<<endl;
        cin>>a>>b>>c>>d>>l;
    }
	return 0;
}

