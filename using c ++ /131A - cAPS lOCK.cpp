#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1; i<s.length(); i++)
    {
        if((s[i]>='a')&&(s[i]<='z')){
            cout<<s<<endl;
            return 0 ;
        }
    }
    for(int i=0; i<s.length(); i++)
    {
        if((s[i]>='A')&&(s[i]<='Z'))
            s[i]=s[i]+32;
        else
            s[i]=s[i]-32;
    }
    cout<<s<<endl;
    return 0;
}
