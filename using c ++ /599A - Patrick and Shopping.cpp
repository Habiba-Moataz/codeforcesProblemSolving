#include<iostream>
using namespace std;

int main()
{
    long long int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int mv1=d1+d2+d3;
    int mv2=d1*2+d2*2;
    int mv3=d1*2+d3*2;
    int mv4=d2*2+d3*2;
    cout<<min(min(mv1,mv2),min(mv3,mv4));
    return 0;
}
