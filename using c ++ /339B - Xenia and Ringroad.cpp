#include <iostream>
using namespace std;

int main()
{
    long n,m,a[100000];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    long long c=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]<a[i-1])
            c+=n-a[i-1]+a[i];
        else
            c+=a[i]-a[i-1];
    }
    cout<<c<<endl;
    return 0;
}
