#include<iostream>
using namespace std;

int main()
{
    long long n;
    long t,arr[10000],j=0;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<=9)
            cout<<n<<endl;
        else if(n<=99)
            cout<<n/11+9<<endl;
        else if(n<=999)
            cout<<n/111+18<<endl;
        else if(n<=9999)
            cout<<n/1111+27<<endl;
        else if(n<=99999)
            cout<<n/11111+36<<endl;
        else if(n<=999999)
            cout<<n/111111+45<<endl;
        else if(n<=9999999)
            cout<<n/1111111+54<<endl;
        else if(n<=99999999)
            cout<<n/11111111+63<<endl;
        else if(n<=999999999)
            cout<<n/111111111+72<<endl;
        else
            cout<<81<<endl;
    }
    return 0;
}
