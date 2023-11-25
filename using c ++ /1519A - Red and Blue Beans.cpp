#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double r,b;
        long long int d,dist;
        cin>>r>>b>>d;
        if(r<b){
           dist=ceil(b/r);
           if(dist-1<=d)
                cout<<"YES"<<endl;
           else
                cout<<"NO"<<endl;
        }
        else if(b<r){
           dist=ceil(r/b);
           if(dist-1<=d)
                cout<<"YES"<<endl;
           else
                cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
