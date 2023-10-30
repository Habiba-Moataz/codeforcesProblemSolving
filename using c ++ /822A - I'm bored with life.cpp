#include<iostream>
using namespace std;
 long long int factorial(int n)
{
    long long f = 1;
    for (int i=1; i<=n; ++i)
        f *= i;
    return f;
}
int main() {
    long long int a,b;
    cin>>a>>b;
    int n=min(a,b);
    cout<< factorial(n)<<endl;
    return 0;
}
