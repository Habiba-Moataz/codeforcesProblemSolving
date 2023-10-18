#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if((s[0]!='a')&&(s[1]!='b')&&(s[2]!='c'))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
