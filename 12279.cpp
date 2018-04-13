#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1,tmp,zero=0,treat=0;
    cin>>n;

    while(n!=0)
    {
        while(n--)
        {
            cin>>tmp;
            if(tmp==0) zero++;
            else treat++;
        }

        cout<<"Case "<<i++<<": "<<treat-zero<<endl;

        treat=0;
        zero=0;

        cin>>n;

    }
    return 0;
}
