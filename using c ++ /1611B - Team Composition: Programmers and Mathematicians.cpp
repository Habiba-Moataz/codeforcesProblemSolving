#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        long long int a,b,n;
        cin>>a>>b;
        n=(a+b)/4;
        cout<<min(n,min(a,b))<<endl;
    }
    return 0;
}
