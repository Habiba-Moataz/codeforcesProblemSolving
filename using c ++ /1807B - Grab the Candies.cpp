#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,a[100],b[100],mx,s,evn,odd;
    cin>>t;
    while(t--)
    {
        mx=0;
        evn=0;
        odd=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
                mx=max(mx,a[i]);
            if(mx==a[i]){
                s=a[0];
                a[0]=a[i];
                a[i]=s;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
                evn+=a[i];
            else
                odd+=a[i];
        }
        if(evn>odd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
