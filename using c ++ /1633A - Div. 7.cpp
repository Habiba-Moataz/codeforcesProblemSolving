#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        float n,x;
        int nInt,m,seven;
        cin>>n;
        nInt=n;
        m=nInt%10;
        seven=7-(nInt%7);
        x=n/7;
        if((m+seven)>9){
            x=floor(x);
            cout<<x*7<<endl;
        }
        else{
            x=ceil(x);
            cout<<x*7<<endl;
        }
    }
    return 0;
}
