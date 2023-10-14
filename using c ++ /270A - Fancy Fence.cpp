#include<iostream>
using namespace std;

int main()
{
    int t;
    float n,a,angle;
    bool ok;
    cin>>t;
    while(t--){
        n=3;
        angle=0;
        ok=false;
        cin>>a;
        if(a>=60){
            while(a>angle){
                angle=(180*(n-2))/n;
                if(angle==a){
                    ok=true;
                    break;
                }
                n++;
            }
        }
        if(ok==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
