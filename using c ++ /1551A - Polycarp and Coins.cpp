#include<iostream>

using namespace std;
int main()
{
    int t,n,one,two,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=n%3;
        if(x==0)
            cout<<n/3<<"    "<<n/3<<endl;
        else if (x==1)
            cout<<n/3 +1<<"    "<<n/3<<endl;
        else
            cout<<n/3 <<"    "<<n/3 +1<<endl;
        }
    return 0;
}
