#include<iostream>
 
using namespace std;
 
int main(){
    int n,a=0,b=0,c=0,cmax=0;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>b;
        c=c-a+b;
        cmax=max(c,cmax);
    }
        cout<<cmax;
    return 0;
}
