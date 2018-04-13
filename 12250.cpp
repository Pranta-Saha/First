#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string> mp;

    mp["HELLO"]="ENGLISH";
    mp["HOLA"]="SPANISH";
    mp["HALLO"]="GERMAN";
    mp["BONJOUR"]="FRENCH";
    mp["CIAO"]="ITALIAN";
    mp["ZDRAVSTVUJTE"]="RUSSIAN";

    string str; int i(1);
    cin>>str;

    while(str!="#")
    {
        if(mp.find(str)!=mp.end())
        {
            cout<<"Case "<<i++<<": "<<mp[str]<<endl;
        }
        else
        {
            cout<<"Case "<<i++<<": "<<"UNKNOWN"<<endl;

        }

        cin>>str;
    }


    return 0;
}
