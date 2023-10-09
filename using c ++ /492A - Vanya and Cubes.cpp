#include <iostream>
using namespace std;

int main()
{
    long int n,height=0,lvl=0;
    int i=0;
    cin>>n;
    while(n>=height){
            i++;
            lvl=lvl+i;
            height=height+lvl;
    }
    cout<<i-1<<endl;
    return 0;
}
