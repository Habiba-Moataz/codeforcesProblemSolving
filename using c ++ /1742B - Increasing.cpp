#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n;
    long long a[100];
    cin>>t;
    while(t--){
        bool can =true;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
            if(a[i]==a[i+1]){
                can=false;
                break;
            }
        if(can==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
