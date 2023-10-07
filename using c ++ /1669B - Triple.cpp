#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long t,n,l,i;
    int c;
    cin>>t;
    while(t--){
        c=1;
        cin>>n;
        long a[n];
            for(i=0;i<n;i++)
                cin>>a[i];
        if(n<3)
            l=-1;
        else{
            sort(a,a+n);
            for(i=1;i<n;i++){
                if(a[i-1]==a[i]){
                    c++;
                    if(c==3)
                        break;
                }
                else
                    c=1;
            }
        }
        if(c==3)
            l=a[i];
        else
            l=-1;
        cout<<l<<endl;
    }
    return 0;
}
