#include<iostream>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--){
       int n,mx1=0,imx1,mx2=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
            cin>>a[i];
            mx1=max(mx1,a[i]);
            if(mx1==a[i])
                imx1=i;
        }
        for(int i=0;i<n;i++){
            if(i!=imx1){
              mx2=max(mx2,a[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i!=imx1)
                cout<<a[i]-mx1<<"   ";
            else
                cout<<a[i]-mx2<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
