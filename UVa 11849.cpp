#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,tmp;
    cin>>n>>m;

    set<int>st;

    while(!(n==0 && m==0) )
    {

        for(i=1;i<=n;i++)
        {
            cin>>tmp;
            st.insert(tmp);
        }
        for(i=1;i<=m;i++)
        {
            cin>>tmp;
            st.insert(tmp);
        }

        cout<<n+m-st.size()<<endl;
        st.clear();
        cin>>n>>m;
    }



	return 0;
}
