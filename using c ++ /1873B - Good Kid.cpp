#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    long t;
    cin>>t;
    while(t--){
        int n,c=0,mn=9;
        long long int prod=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        for(int i=0;i<n;i++){
            if((a[i]==mn)&&(c==0)){
                a[i]=a[i]+1;
                c++;
            }
            prod=prod*a[i];
        }
        cout<<prod<<endl;
    }
    return 0;
}
