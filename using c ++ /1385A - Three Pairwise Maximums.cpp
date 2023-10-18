#include<iostream>
using namespace std;

int main()
{
    long t;
    long long x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if((x==y)&&(x>=z)){
            cout<<"YES"<<endl;
            cout<<x<<"  "<<z<<"   "<<z<<endl;
        }
        else if((x==z)&&(x>=y)){
            cout<<"YES"<<endl;
            cout<<x<<"  "<<y<<"   "<<y<<endl;
        }
        else if((z==y)&&(z>=x)){
            cout<<"YES"<<endl;
            cout<<z<<"  "<<x<<"   "<<x<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
