#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        long long int n,m,x;
        long long int modx,y;
        long double xf,nf,divx;
        cin>>n>>m>>x;
        if(x==n*m){
            cout<<x<<endl;
        }
        else{
            xf=x;
            nf=n;
            divx=xf/nf;
            modx=x%n;
            if(modx==0)
                modx=n;
            y=(modx-1)*m+ceil(divx);
            cout<<y<<endl;
        }
    }
    return 0;
}
