#include<iostream>
using namespace std;
 
int main()
{
    int k,n,w,x;
    cin >> k;
    cin >> n;
    cin >> w;
    int s=0;
 
    for(int i = 1 ; i<=w;i++){
        s=s+k*i;
    }
 
    if(n>=s)
        x=0;
    else
        x=s-n;
    cout << x;
    return 0;
}
