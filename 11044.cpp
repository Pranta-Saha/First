#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,m;

    while(t--)
    {
        cin>>n>>m;
        n-=2; m-=2;

        if(n%3!=0) n=n/3+1;
        else n=n/3;

        if(m%3!=0) m=m/3+1;
        else m=m/3;

        cout<<n*m<<endl;
    }
    return 0;
}
