
#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    int n,i,j,cs;
    cin>>cs;
    cin.ignore();
    string str;
    map<int,string>mp;
    map<int,string>::iterator it;

    stringstream ss;
    //getchar();

    while(cs--)
    {
        string data[100001];
        int indx[100001];
        getchar();
        getline(cin,str);
        ss.clear();
        ss<<str;
        i=0;
        while(ss>>indx[i]) i++;

        ss.clear();
        getline(cin, str);
        ss<<str;
        i=0;
        while(ss>>data[i]) i++;

        for(i=i-1;i>=0;i--)
        {
            mp[indx[i]]=data[i];
        }

        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->second<<endl;
        }

        if(cs) cout<<endl;
        mp.clear();
    }



	return 0;
}
