#include <bits/stdc++.h>
using namespace std;

int main()
{

//freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,j,cnt=0;
    vector<int > vec;

    while((cin>>n))
    {
        vec.push_back(n); sort(vec.begin(),vec.end());
        cnt++;
        if(cnt&1) cout<<vec[cnt/2]<<endl;
        else cout<<(vec[cnt/2]+vec[(cnt/2)-1])/2<<endl;
    }

	return 0;
}
