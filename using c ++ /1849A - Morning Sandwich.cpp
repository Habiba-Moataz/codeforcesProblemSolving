#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        if(b>c+h)
            cout<<(c+h)*2+1<<endl;
        else
            cout<<b*2-1<<endl;
    }
    return 0;
}
