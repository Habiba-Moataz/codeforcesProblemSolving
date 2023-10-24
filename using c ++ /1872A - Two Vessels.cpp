#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        float a,b,c,d;
        cin>>a>>b>>c;
        if(a<b)
            swap(a,b);
        d=((a+b)/2-b)/c;
        cout<<ceil(d)<<endl;

    }
    return 0;
}
