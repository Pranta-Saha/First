#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);


    long long n,i,j;
    cin>>n;
    while(n)
    {
        long long sum=0;
        multiset<long long>mst;
        multiset<long long>::iterator it;
        while(n--)
            {
                long long tmp;
                cin>>tmp;
                mst.insert(tmp);
            }

        while(mst.size()>=2)
        {
            it=mst.begin();
            it++;
            long long tmp=*it+*mst.begin();
            mst.erase(it);
            it=mst.begin();
            mst.erase(it);
            mst.insert(tmp);
            sum+=tmp;
        }

        cout<<sum<<endl;

        cin>>n;
    }


    return 0;
}
