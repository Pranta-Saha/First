#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,tmp,mx=INT_MIN,mn=INT_MAX;
    cin>>t;

    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>tmp;
            mx=max(mx,tmp);
            mn=min(mn,tmp);
        }
        cout<<(mx-mn)*2<<endl;
        mx=INT_MIN;
        mn=INT_MAX;


    }


    return 0;
}
