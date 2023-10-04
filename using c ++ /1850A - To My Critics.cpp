#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,sum1,sum2,sum3;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sum1=a+b;
        sum2=b+c;
        sum3=a+c;
        if((sum1>=10)||(sum2>=10)||(sum3>=10))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
