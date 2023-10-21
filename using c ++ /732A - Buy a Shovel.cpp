#include <iostream>
using namespace std;

int main()
{
    int k,r,n=1,c;
    cin>>k>>r;
    while(1){
        c=(n*k)%10;
        if((c==0)||(c==r))
            break;
        n++;
    }
    cout<<n;
    return 0;
}
