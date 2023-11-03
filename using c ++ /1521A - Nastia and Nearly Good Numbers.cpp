#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,x,y,z;
        cin>>a>>b;
        if(b==1)
           cout<<"NO"<<endl;
        else{
            x=a*(b-1);
            y=a*(b+1);
            z=x+y;
            cout<<"YES"<<endl;
            cout<<x<<"  "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}
