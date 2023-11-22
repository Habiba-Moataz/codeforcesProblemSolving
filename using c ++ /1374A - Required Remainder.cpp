#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        long long int x,y,n;
        cin>>x>>y>>n;
        if(n%x==y)
            cout<<n<<endl;
        else{
            int r=n%x;
            if(r>y)
                cout<<n-(r-y)<<endl;
            else
                cout<<n-r-(x-y)<<endl;
        }
    }
    return 0;
}
