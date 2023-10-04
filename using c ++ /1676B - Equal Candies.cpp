#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    long long a[50],mn,x;
    cin>>t;
    while(t--){
        x=0;
        mn=10000000;
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>a[i];
                mn=min(mn,a[i]);
        }
        for(int i=0;i<n;i++){
                x=x+(a[i]-mn);
        }
        cout<<mn<<endl;
        cout<<x<<endl;
    }
    return 0;
}
