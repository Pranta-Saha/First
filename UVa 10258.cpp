#include <bits/stdc++.h>
using namespace std;

class tmm{
    public:
    int solve,penalty,tmnum;
};

bool cmp(tmm t, tmm tt)
{
    if(t.solve!=tt.solve)
        return t.solve>tt.solve;
    if(t.penalty!=tt.penalty)
        return t.penalty<tt.penalty;
    return t.tmnum<tt.tmnum;
}


int main()
{
    int n,i,j,t;
    stringstream ss;
    string str;
    getline(cin,str);
    ss.clear();
    ss<<str;
    ss>>t;

    int vec[101][10];
    vector<tmm>vec2;
    bool chkcurect[101][10]; bool chksub[101];
    bool chkcurect1s[101][10];

    getline(cin,str);

    while(t--)
    {
        for(i=0;i<101;i++)
        {
            for(j=0;j<=9;j++){ vec[i][j]=0; chkcurect[i][j]=0; chkcurect1s[i][j]=0; }
            chksub[i]=0;
        }
        vec2.clear();
        int team,prob,time; char c;



        while(getline(cin,str))
        {
            if(str.empty()) break;
            ss.clear();
            ss<<str;
            ss>>team>>prob>>time>>c;

            if(c=='C')
            {
                if(chkcurect1s[team][prob]==0) vec[team][prob]+=time;
                chkcurect[team][prob]=true;
                chkcurect1s[team][prob]=true;
            }
            else if(c=='I')
            {
                if(chkcurect1s[team][prob]==0) vec[team][prob]+=20;
            }

            chksub[team]=true;
        }

        for(i=1;i<=100;i++)
        {
        tmm tmp; tmp.penalty=0;
        tmp.solve=0;
        tmp.tmnum=i;

            if(chksub[i])
            {
               for(j=1;j<=9;j++)
               {
                    if(chkcurect[i][j])
                    {tmp.penalty+=vec[i][j]; tmp.solve++;}
               }
            vec2.push_back(tmp);
            }
        }

        sort(vec2.begin(),vec2.end(),cmp);
        for(i=0;i<vec2.size();i++)
        {
            cout<<vec2[i].tmnum<<" "<<vec2[i].solve<<" "<<vec2[i].penalty<<endl;
        }
        if(t!=0)
        cout<<endl;
    }

	return 0;
}

















