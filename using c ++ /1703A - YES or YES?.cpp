#include<iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n,x;
    cin>>n;
    while(n--){
       cin>>s;
       x=0;
       if((s[0]=='y')||(s[0]=='Y'))
            x++;
       if((s[1]=='e')||(s[1]=='E'))
            x++;
       if((s[2]=='s')||(s[2]=='S'))
            x++;
       if(x==3)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }
    return 0 ;
}
