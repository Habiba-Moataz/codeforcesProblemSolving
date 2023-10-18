#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    long long x,y,a,b,mn,c,d,mnfnl;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;
        mn=min(x,y);
        c=mn*b+(x-mn)*a+(y-mn)*a;
        d=x*a+y*a;
        mnfnl=min(c,d);
        cout<<mnfnl<<endl;
    }
    return 0;
}
