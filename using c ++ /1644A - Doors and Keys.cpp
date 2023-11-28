#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       string s;
       int r=0,g=0,b=0;
       bool open=true;
       cin>>s;
       for(int i=0;i<6;i++){
            if(s[i]=='r')
                r++;
            else if(s[i]=='b')
                b++;
            else if(s[i]=='g')
                g++;
            else if(s[i]=='R'){
                if(!r){
                    open=false;
                    break;
                }
            }
            else if(s[i]=='B'){
                if(!b){
                    open=false;
                    break;
                }
            }
            else if(s[i]=='G'){
                if(!g){
                    open=false;
                    break;
                }
            }
       }
       if(open)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }
    return 0;
}
