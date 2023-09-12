#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n!=0){
        if(n>=100){
            n=n-100;
            x++;
        }
        else if(n>=20){
            n=n-20;
            x++;
        }
        else if(n>=10){
            n=n-10;
            x++;
        }
        else if(n>=5){
            n=n-5;
            x++;
        }
        else{
            n=n-1;
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
