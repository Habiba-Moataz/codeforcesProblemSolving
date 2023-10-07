#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        long long mn=1000000000 ,mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}
