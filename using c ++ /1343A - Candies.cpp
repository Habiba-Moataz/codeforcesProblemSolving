#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long t;
    long long n,x,sum;
    cin>>t;
    while(t--){
        sum=1;
        cin>>n;
        for(int i=1;i<n;i++){
            sum+=pow(2,i);
            if(n%sum==0)
                break;
        }
        cout<<n/sum<<endl;
    }
    return 0;
}
