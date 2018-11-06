
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    int n,tmp,tmp2,i,flag=0;
    set<int >::iterator it;

    while(scanf("%d",&n)==1)
    {
    set<int >st;
    flag=0;
    //cout<<n;
    if(n==1) { cin>>tmp; cout<<"Jolly"<<endl; continue; }

        scanf("%d",&tmp);
        for(i=1;i<n;i++)
        {
            scanf("%d",&tmp2);
            st.insert(abs(tmp-tmp2));
            tmp=tmp2;
            //cout<<tmp<<" "<<i<<endl;
        }
        if(st.size()!=n-1){ cout<<"Not jolly"<<endl; continue; }
        it=st.begin();

        for(i=1;i<=n-1;i++)
        {
            if(*it!=i) {flag=1; break;}
            it++;
        }
        if(flag==1) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;

        st.clear();
    }

	return 0;
}
