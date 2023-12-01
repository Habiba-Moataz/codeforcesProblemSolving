#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n,swp=0;
        cin>>n;
        long int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            if(p[i]==i+1)
                swp++;
        }
        if((swp>0)&&(swp&1))
            cout<<swp/2+1<<endl;
        else if(swp>0)
            cout<<swp/2<<endl;
        else
            cout<<swp<<endl;
    }
    return 0;
}
