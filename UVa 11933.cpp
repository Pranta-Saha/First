#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void spilt(int n)
{
    int cnt=1,a=0,b=0,numberOfbit=floor(log2(n))+1;
    for(int i=0;i<numberOfbit;i++)
    {
        if(n&(1<<i))
        {
            if(cnt&1) a=a|(1<<i);
            else b=b|(1<<i);
            cnt++;
        }
    }
    cout<<a<<" "<<b<<endl;
}


int main()
{

    int n,i,j;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        spilt(n);
    }



	return 0;
}
