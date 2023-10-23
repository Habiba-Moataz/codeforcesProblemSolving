#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c=0,mx=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]==0)
                c++;
            else{
                mx=max(mx,c);
                c=0;
            }
        }
        mx=max(mx,c);
        cout<<mx<<endl;
    }
    return 0;
}
