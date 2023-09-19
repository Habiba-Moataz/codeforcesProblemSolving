#include<iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int i =0;
    cin>>s;
    int n=s.length();
    while(i<n){
        if (s[i]=='.'){
            cout<<0;
            i++;
        }
        else if((s[i]=='-') && (s[i+1]=='.')){
            cout<<1;
            i=i+2;
        }
        else if((s[i]=='-') && (s[i+1]=='-')){
            cout<<2;
            i=i+2;
        }
    }
    return 0 ;
}
