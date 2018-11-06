#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    int s,b,arr[100005],i,lo,hi;
    for(i=0;i<100004;i++) arr[i]=i+1;
    cin>>s>>b;

    while(!(s==0&&b==0))
    {
        set<int >st(arr,arr+s);
        set<int >::iterator it1,it2;

        while(b--)
        {
            cin>>lo>>hi;
            it1=st.find(lo); it2=st.find(hi);
            if(it1==st.begin()) cout<<"* ";
            else { it1--; cout<<*it1<<" "; it1++; }

            it2++;
            if(it2==st.end()) cout<<"*"<<endl;
            else { cout<<*it2<<endl;  }


            st.erase(it1,it2);
            //cout<<st.size()<<endl;
        }
        cout<<"-"<<endl;
        cin>>s>>b;
        st.clear();
    }



	return 0;
}
