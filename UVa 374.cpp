#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

ll fun(ll a, ll b, ll n)
{
        if(b==0) return 1;
        ll tmp=fun(a,b>>1,n);
        tmp=(tmp*tmp)%n;
        if(b&1) tmp=(tmp*(a%n))%n;
        return tmp;
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

        ll n,i,j,a,b;
        while((cin>>a>>b>>n))
        {
                cout<<fun(a,b,n)%n<<endl;
        }
	return 0;
}
