#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,m,k,mn;
    cin>>n>>m>>k;
    mn=min(m,k);
    if(n<=mn)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
