#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100],mn=100,mx=0,c,imax,imin;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=mn){
            mn=a[i];
            imin=i;
        }
        if(a[i]>mx){
            mx=a[i];
            imax=i;
        }
    }
    if(imin>imax)
        c=imax+((n-1)-imin);
    else
        c=imax+((n-1)-(imin+1));
    cout <<c<< endl;
    return 0;
}
