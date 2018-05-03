#include <bits/stdc++.h>
using namespace std;

int n,m;
int main()
{
    //freopen("in.txt","r",stdin);
    int s,i,j,sticker=0;


    string str;

    char graph[105][105], direction,ii,jj;

    cin>>n>>m>>s;
//cout<<chkbound(-1,4)<<" "<<chkbound(0,5);
    while(!(n==0&&m==0&&s==0))
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>graph[i][j];
                if(graph[i][j]=='N' || graph[i][j]=='S' || graph[i][j]=='L' || graph[i][j]=='O')
                {
                    direction=graph[i][j];
                    ii=i;jj=j;
                    //cout<<direction<<endl;
                }
            }
        }

        if(direction=='N') direction='U';
        else if(direction=='S') direction='D';
        else if(direction=='L') direction='R';
        else direction='L';


        cin>>str;

        for(i=0;i<s;i++)
        {
            if(str[i]=='D')
            {
                if(direction=='U') direction='R';
                else if(direction=='L') direction='U';
                else if(direction=='D') direction='L';
                else direction='D';
            }
            else if(str[i]=='E')
            {
                if(direction=='U') direction='L';
                else if(direction=='L') direction='D';
                else if(direction=='D') direction='R';
                else  direction='U';
            }
            else
            {
                if(direction=='U')
                {
                    ii--;
                    if( !((ii>=0&&ii<n) && (jj>=0&&jj<m)) || graph[ii][jj]=='#' ) ii++;
                    else if(graph[ii][jj]=='*')
                    {
                        sticker++;
                        graph[ii][jj]='.';
                    }
                }
                else if(direction=='L')
                {
                    jj--;
                    if( !((ii>=0&&ii<n) && (jj>=0&&jj<m)) || graph[ii][jj]=='#' ) jj++;
                    else if(graph[ii][jj]=='*')
                    {
                        sticker++;
                        graph[ii][jj]='.';
                    }
                }
                else if(direction=='D')
                {
                    ii++;
                    if( !((ii>=0&&ii<n) && (jj>=0&&jj<m)) || graph[ii][jj]=='#' ) ii--;
                    else if(graph[ii][jj]=='*')
                    {
                        sticker++;
                        graph[ii][jj]='.';
                    }
                }
                else
                {
                    jj++;
                    if( !((ii>=0&&ii<n) && (jj>=0&&jj<m)) || graph[ii][jj]=='#' ) jj--;
                    else if(graph[ii][jj]=='*')
                    {
                        sticker++;
                        graph[ii][jj]='.';
                    }
                }

            }
        }

        cout<<sticker<<endl;
        sticker=0;
        cin>>n>>m>>s;
    }

    return 0;
}
