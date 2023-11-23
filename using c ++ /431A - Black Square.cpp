#include<iostream>
using namespace std;
int main()
{
    long int a[4],tn=0;
    string s;
    for(int i=0;i<4;i++)
        cin>>a[i];
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            tn+=a[0];
        else if(s[i]=='2')
            tn+=a[1];
        else if(s[i]=='3')
            tn+=a[2];
        else if(s[i]=='4')
            tn+=a[3];
    }
    cout<<tn<<endl;
    return 0;
}
