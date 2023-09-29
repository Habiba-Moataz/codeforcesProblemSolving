#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long x,y,z,c=0;
    cin>>x;
    while(x>0){
    y = log2(x);
    z = pow(2,y);
    x=x-z;
    c++;
    }
    cout<<c;
    return 0;
}
