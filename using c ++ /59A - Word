#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string s ;
    int x=0,y=0;
    cin>>s;
    for(int i =0;i<s.size();i++){
        if ((s[i]>= 97) &&(s[i]<= 122)) //samll
            x++;
        else   //Capital
            y++;
    }
    if(x<y)
        for(int i =0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    else
        for(int i =0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    cout<<s;
    return 0;
}
