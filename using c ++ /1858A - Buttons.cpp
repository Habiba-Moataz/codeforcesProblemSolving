#include<iostream>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        long long int a,b,c,x,y;
        cin>>a>>b>>c;
        x=a+c;
        y=b+c;
        if(((x==y)&&(c&1))||(x>y))
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}
