#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,x=0,y=0,j=0,k=0;
    string sn,sn1="",sn2="";
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        sn=to_string(n);
        for(int i=1;i<sn.length();i++){
                if(i!=sn.length()-2)
                    x=x*10 + (sn[i] - '0');
        }
        for(int i=1;i<sn.length()-1;i++){
             y=y*10 + (sn[i] - '0');
        }
        if((x==0)||(y==0)){
            cout<<0<<endl;
        }
        else{
            int fin=min(x,y);
            cout<<-fin<<endl;
        }
    }
    return 0;
}
