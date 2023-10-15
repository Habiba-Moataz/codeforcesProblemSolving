#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int rot=0,mn,x,y;
    char start='a';
    for(int i=0;i<s.length();i++){
        x=start-s[i];
        if(x<0)
            x+=26;
        y=s[i]-start;
        if(y<0)
            y+=26;
        mn=min(x,y);
        rot+=mn;
        start=s[i];
    }
    cout<<rot<<endl;
    return 0;
}
