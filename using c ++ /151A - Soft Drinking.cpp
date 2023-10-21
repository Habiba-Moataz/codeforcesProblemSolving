#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int soft=k*l/nl;
    int lime=c*d;
    int salt=p/np;
    int bread=min({soft,lime,salt});
    cout<<bread/n;
    return 0;
}
