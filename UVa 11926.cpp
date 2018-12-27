
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    int n,m,i,j,start,endd,interval;
    bitset<1000006>btst;

    while(cin>>n>>m && (n|m))
    {
        bool conflict=0;
        while(n--)
        {
            cin>>start>>endd;
            if(conflict) continue;

            for(i=start+1;i<=endd;i++)
            {
                if(btst.test(i)) {conflict=1; break;}
                btst.set(i);
            }

        }
        while(m--)
        {
            cin>>start>>endd>>interval;
            if(conflict) continue;
            while(1)
            {
                for(i=start+1;i<=endd;i++)
                {
                    if(btst.test(i)) {conflict=1;break;}
                    btst.set(i);
                }
                start+=interval;
                endd+=interval;
                if(start>1000000) break;
                if(endd>1000000) endd=1000000;

            }
        }
        if(conflict) cout<<"CONFLICT"<<endl;
        else cout<<"NO CONFLICT"<<endl;
        btst.reset();
    }



	return 0;
}
