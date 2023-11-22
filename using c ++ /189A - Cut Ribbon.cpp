#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,res=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int k=(n-(i*a)-(j*b))/c;
            if(k<0)
                k=0;
            if((i*a)+(j*b)+(k*c)==n)
                res=max(res,i+j+k);
        }
    }
    cout<<res<<endl;
    return 0;
}
