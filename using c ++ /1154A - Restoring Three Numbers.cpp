#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long x,y,z,w;
    long long a,b,c,d;
    cin>>x>>y>>z>>w;
    d=(x+y+z+w)/3;
    if (d==x){
        a=abs(x-y);
        b=abs(x-z);
        c=abs(x-w);
    }
    else if (d==y){
        a=abs(y-x);
        b=abs(y-z);
        c=abs(y-w);
    }
    else if (d==z){
        a=abs(z-x);
        b=abs(z-y);
        c=abs(z-w);
    }
    else{
        a=abs(w-x);
        b=abs(w-y);
        c=abs(w-z);
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
