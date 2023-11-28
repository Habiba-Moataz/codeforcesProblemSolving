#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--){
        int n,spell;
        float one=0;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
            if(h[i]==1)
                one++;
        }
        spell=(n-one)+(ceil(one/2));
        cout<<spell<<endl;
    }
    return 0;
}
