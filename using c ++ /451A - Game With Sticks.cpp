#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,w;
    cin>>n>>m;
    int c=n*m;
    w=min(m,n);
    if(w&1)
        cout<<"Akshat";
    else
        cout<<"Malvika";
    return 0;
}
