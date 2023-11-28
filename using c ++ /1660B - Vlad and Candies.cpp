#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            if(a[0]==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
            sort(a,a+n);
            if(a[n-1]-a[n-2]>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
