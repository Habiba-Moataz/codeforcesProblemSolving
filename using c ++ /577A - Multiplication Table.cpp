#include<iostream>

using namespace std;

int main(){
    long long n,x,c=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        if ((x % i == 0) && (x / i <= n))
            c++;
    cout<<c;
    return 0;
}
