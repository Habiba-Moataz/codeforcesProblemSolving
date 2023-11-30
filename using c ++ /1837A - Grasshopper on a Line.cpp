#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            int m,l;
            for(int i=1;i<x;i++){
                if((i%k!=0)&&((x-i)%k!=0)){
                    m=i;
                    l=x-i;
                }
            }
            cout<<2<<endl;
            cout<<m<<"  "<<l<<endl;
        }
    }
    return 0;
}
