#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,w,x,y,z,b,c,d,e;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                w=i+1;
                x=n+1-w;
            }
            else if(a[i]==n){
                y=i+1;
                z=n+1-y;
            }
        }
        b=max(w,y);
        c=max(x,z);
        d=w+z;
        e=x+y;
        cout<<min(min(b,c),min(d,e))<<endl;
    }
    return 0;
}
