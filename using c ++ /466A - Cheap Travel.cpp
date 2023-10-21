#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    float nf=n, mf=m;
    int c1=n/m*b+n%m*a;
    int c2=n*a;
    int c3=ceil(nf/mf)*b;
    int c=min({c1,c2,c3});
    cout<<c;
    return 0;
}
