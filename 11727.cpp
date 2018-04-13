#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c,mid;
        cin>>a>>b>>c;
        mid=(a>b)? ( (a>c)? ((b>c)?b:c)  :a  ) : ((b>c)? ((a>c)?a:c) : b);
        cout<<"Case "<<i<<": "<<mid<<endl;
    }


    return 0;
}
