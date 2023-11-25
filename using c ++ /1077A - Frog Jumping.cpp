#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,k,r,l,x;
        cin>>a>>b>>k;
        l=k/2;
        r=k-l;
        x=r*a-l*b;
        cout<<x<<endl;
    }
    return 0;
}
