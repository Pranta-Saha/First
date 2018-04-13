#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;

        n=n%100;
        n=n/10;

        cout<<abs(n)<<endl;
    }
    return 0;
}
