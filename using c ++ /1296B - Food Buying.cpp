#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,ans,div;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n,div=n/10;
        while(div){
                n=n%10;
                n=n+div;
                ans+=div;
                div=n/10;
            }
            cout<<ans<<"\n";
    }
    return 0;
}
