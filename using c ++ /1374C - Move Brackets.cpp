#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int t,n,c,x;
    cin>>t;
    while(t--){
        c=0;
        x=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]==')')
                x--;
            else
                x++;
            if(x<0){
                c++;
                x=0;
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
