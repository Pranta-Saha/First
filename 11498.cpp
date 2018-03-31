#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,N,M,x,y;
    cin>>n;

    while(n!=0)
    {
        cin>>N>>M;

        while(n--)
        {
            cin>>x>>y;

            if(N==x||M==y) cout<<"divisa"<<endl;

            else
            {
                if(x>N)
                {
                    if(y>M) cout<<"NE"<<endl;
                    else cout<<"SE"<<endl;
                }
                else
                {
                    if(y>M) cout<<"NO"<<endl;
                    else cout<<"SO"<<endl;

                }
            }
        }
        cin>>n;
    }
    return 0;
}
