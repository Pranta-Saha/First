#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    string one="one",two="two";
    string str;
    int cnt1=0,cnt2=0;

    cin>>n;

    while(n--)
    {
        cin>>str;

        if(str.size()==5) cout<<3<<endl;
        else
        {
            for(i=0;i<3;i++)
            {
                if(str[i]==one[i]) cnt1++;
                if(str[i]==two[i]) cnt2++;
            }

            if(cnt1>cnt2) cout<<1<<endl;
            else cout<<2<<endl;
            cnt1=0;cnt2=0;
        }
    }

    return 0;
}
