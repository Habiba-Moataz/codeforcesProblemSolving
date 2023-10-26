#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
            long long int n ,p;
            long double l;
            cin>>n;
            l =log10(n);
            p = pow(10,floor(l));
            cout<<n-p<<endl;
            }
    return 0;
}
