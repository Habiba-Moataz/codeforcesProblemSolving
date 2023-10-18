#include<iostream>
using namespace std;

int main()
{
    long t;
    long long a,b,c,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        x=a-1;
        y=abs(b-c)+abs(c-1);
        if(x<y)
            cout<<1<<endl;
        else if(y<x)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}
