#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int x,y,z;
    int a,b,c;
    cin>>x>>y>>z;
    a=abs(y-x)+abs(z-x);
    b=abs(x-y)+abs(z-y);
    c=abs(x-z)+abs(y-z);
    if((a<=b)&&(a<=c))
        cout<<a<<endl;
    else if((b<=a)&&(b<=c))
        cout<<b<<endl;
    else
        cout<<c<<endl;
    return 0;
}
