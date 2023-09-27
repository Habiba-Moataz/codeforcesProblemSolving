#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x[100000],q,m,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x,x+n);
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>m;
        y=upper_bound(x,x+n,m)-x;
        cout<<y<<endl;
    }
    return 0;
}
