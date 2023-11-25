#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        if(s/n<=a){
            if(s%n<=b)
                cout<<"YES"<<endl;
            else
               cout<<"NO"<<endl;
        }
        else{
            s-=n*a;
            if(s<=b)
               cout<<"YES"<<endl;
            else
               cout<<"NO"<<endl;
        }
    }
    return 0;
}
