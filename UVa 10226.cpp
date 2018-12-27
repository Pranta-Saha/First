#include<bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    int n,i,j;
    scanf("%d\n\n",&n);
    //string str;
    char str[55];
    //gets(str);
    map<string,int>mp;
    map<string,int>::iterator it;


    while(n--)
    {
        mp.clear();
        int cnt=0;

        while(gets(str))
        {
            //scanf("%[^\n]",str);
            string strr=string(str);
            if(strr=="") break;
            cnt++;
            mp[strr]++;
        }

        while(!mp.empty())
        {
            it=mp.begin();
            cout<<it->first<<" "<<fixed<<setprecision(4)<<((double)it->second*100.0)/(double)cnt<<endl;
            mp.erase(it);

        }
        if(n){cout<<endl;}
    }


	return 0;
}
