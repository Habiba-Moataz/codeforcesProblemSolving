#include<iostream>

using namespace std;
int main()
{
    int t,a,b,c,mins,pls;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        mins=a-b;
        pls=a+b;
        if(mins==c)
            cout<<"-"<<endl;
        else
            cout<<"+"<<endl;
    }
    return 0;
}
