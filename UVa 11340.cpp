#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,t;
    cin>>t;

    while(t--)
    {
        double valu=0;
        map<char,double>cost;
        cin>>n;
        char c; double cent;

        while(n--)
        {
            cin>>c>>cent;
            cost[c]=cent;
        }

        cin>>n;
        string str;
        cin.ignore();
        while(n--)
        {
            getline(cin,str);
            int len=str.size();
            for(int i=0;i<len;i++)
            {
                if(cost.find(str[i])!=cost.end())
                    valu+=cost[str[i]];
            }
        }

        printf("%0.2lf$\n",valu/100.0);
        cost.clear();
    }
	return 0;
}
