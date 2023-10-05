#include<iostream>

using namespace std;

int main()
{
    long n,l=0,i;
    cin>>n;
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            l++;

    cout<<l<<endl;
    return 0;
}
