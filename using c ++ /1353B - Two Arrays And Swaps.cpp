#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n,k,a[30],b[30],x,sum;
    cin>>t;
    while(t--){
        sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        while(k--){
           if(a[0]<b[n-1]){
            x=a[0];
            a[0]=b[n-1];
            b[n-1]=x;
            sort(a,a+n);
            sort(b,b+n);
           }
           else
                break;
        }
        for(int i=0;i<n;i++)
            sum=sum+a[i];
        cout<<sum<<endl;;
    }
    return 0;
}
