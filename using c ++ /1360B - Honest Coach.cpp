#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t,n,s[50],mn,dif;
    cin>>t;
    while(t--){
        mn=1000;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n);
        for(int i=0;i<n-1;i++){
            dif=abs(s[i]-s[i+1]);
            mn=min(mn,dif);
        }
        cout<<mn<<endl;
    }
    return 0;
}
