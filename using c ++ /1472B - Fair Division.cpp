#include<iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--){
        int n,one=0,two=0,res;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                one++;
            else
                two++;
        }
        if((one&1)||((one<2)&&(two&1)))
            cout<<"NO"<<endl;
        else if((two==0)||(two==one))
            cout<<"YES"<<endl;
        else{
            res=one+two*2;
            if(res&1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
