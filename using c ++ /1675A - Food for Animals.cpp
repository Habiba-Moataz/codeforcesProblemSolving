#include<iostream>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        long long int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if((x<=(a+c))&&(y<=(b+c))&&((x+y)<=(a+b+c)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
