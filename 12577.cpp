#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i=1;

    while(str!="*")
    {
        if(str=="Hajj")
            cout<<"Case "<<i++<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<i++<<": Hajj-e-Asghar"<<endl;

    cin>>str;
    }
    return 0;
}
