#include<iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--){
        long long int n,sum=0;
        cin>>n;
        while(n){
            sum+=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
