#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    int x= 0;
    string s;
    cin>>n;
    for(int i =0 ;i<n;i++){
        cin >> s;
        if(s[0] =='T')//11
            x+=4;
        else if(s[0]=='C')//4
            x+=6;
        else if(s[0]=='O')//10
            x+=8;
        else if(s[0]=='D')//12
            x+=12;
        else//
            x+=20;
    }
    cout<<x<<endl;
    return 0;
}
