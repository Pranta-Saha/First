#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    int a,b,c,z;


    for(z=1;z<=t;z++)
    {
        cin>>a>>b>>c;

        if(a>20||b>20||c>20)
            cout<<"Case "<<z<<": bad"<<endl;
        else
            cout<<"Case "<<z<<": good"<<endl;
    }
    return 0;
}
