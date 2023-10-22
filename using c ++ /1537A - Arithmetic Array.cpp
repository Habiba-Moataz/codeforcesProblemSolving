#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,mean=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mean=mean+(a[i]-1);
        }
        if(mean>=0)
            cout<<mean<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
