#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    int t,n,a,b,mx,imax;
    cin>>t;
    while(t--){
        mx=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10){
                mx=max(mx,b);
                if(mx==b)
                    imax=i+1;
            }
        }
        cout<<imax<<endl;;
    }
    return 0;
}
