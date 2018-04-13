#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string str; int sum=0,tmp;

    while(n--)
    {
        cin>>str;
        if(str=="donate")
        {
            cin>>tmp;
            sum+=tmp;
        }
        else cout<<sum<<endl;
    }

    return 0;
}
