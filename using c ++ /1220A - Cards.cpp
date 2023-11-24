#include<iostream>
using namespace std;
int main()
{
    long int n,zero=0,one=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='z')
            zero++;
        else if(s[i]=='n')
            one++;
    }
    for(int i=0;i<one;i++){
        cout<<1<<"  ";
    }
    for(int i=0;i<zero;i++){
        cout<<0<<"  ";
    }
    return 0;
}
