#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d,x;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>a>>b>>c>>d;
        if(a<=b)
            x++;
        if(a<=c)
            x++;
        if(a<=d)
            x++;
        cout<<x<<endl;
    }
    return 0;
}
