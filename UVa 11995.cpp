#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
//  ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	cerr.tie(nullptr);


    int t;
    while(scanf("%d",&t)!=EOF)
    {
        stack<int>stk;
        queue<int>q;
        priority_queue<int>pq;
        int fstk=1,fq=1,fpq=1;

        while(t--)
        {
            int cmd,data;
            cin>>cmd>>data;
            if(cmd==1)
            {
                stk.push(data);
                q.push(data);
                pq.push(data);
            }
            else
            {
                if(!stk.empty() && stk.top()==data)
                    stk.pop();
                else
                    fstk=0;
                if(!q.empty() && q.front()==data)
                    q.pop();
                else
                    fq=0;
                if(!pq.empty() && pq.top()==data)
                    pq.pop();
                else
                    fpq=0;
            }
        }
        if(fstk+fq+fpq>1)
            cout<<"not sure"<<endl;
        else if(fstk+fq+fpq==0)
            cout<<"impossible"<<endl;
        else
        {
            if(fstk==1)
                cout<<"stack"<<endl;
            if(fq==1)
                cout<<"queue"<<endl;
            if(fpq==1)
                cout<<"priority queue"<<endl;
        }
    }

	return 0;
}
