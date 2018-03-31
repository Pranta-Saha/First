#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int cnt=1;

    while(scanf("%c",&c)!=EOF)
    {
        if(c=='"')
        {
            if(cnt&1)
                cout<<"``";
            else
                cout<<"''";

            cnt++;
        }
        else
        {
            cout<<c;
        }
    }

    return 0;
}
