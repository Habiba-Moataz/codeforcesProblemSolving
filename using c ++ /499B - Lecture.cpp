#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> ans;
    string a,b;
    while(m--)
    {
        cin>>a>>b;
        if(b.length()<a.length())
            ans[a]=b;
        else
            ans[a]=a;
    }
    while(n--)
    {
        cin>>a;
        cout<<ans[a]<<" ";
    }
    return 0;
}
