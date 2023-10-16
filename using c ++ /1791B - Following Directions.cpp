#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,n,x,y;
    string s;
    bool candy;
    cin>>t;
    while (t--){
        x=0;
        y=0;
        candy=false;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
            else
                y--;
            if((x==1)&&(y==1)){
                candy=true;
                break;
            }
        }
            if(candy)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}
