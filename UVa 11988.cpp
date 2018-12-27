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


    int n,i,j;
    string str,tmp;
    deque<string>dque;
    deque<string>::iterator it;


    while((cin>>str))
    {
        tmp="";
        bool homeORend=1;
        int len=str.size();
        for(i=0;i<len;i++)
        {
            if(str[i]=='[')
            {
                if(homeORend==1) dque.push_front(tmp);
                else dque.push_back(tmp);
                homeORend=1;
                tmp="";
            }
            else if(str[i]==']')
            {
                if(homeORend==1) dque.push_front(tmp);
                else dque.push_back(tmp);
                homeORend=0;
                tmp="";
            }
            else
            {
                tmp+=str[i];
            }
        }
        if(homeORend==1) dque.push_front(tmp);
        else dque.push_back(tmp);

        for(it=dque.begin();it!=dque.end();it++)
        {
            cout<<*it;
            dque.pop_front();
        }
        cout<<endl;

        //dque.clear();
    }



	return 0;
}
