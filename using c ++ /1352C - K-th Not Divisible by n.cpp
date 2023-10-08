#include <iostream>
using namespace std;

int main()
{
    int t;
    long long int n,k,div,mod,ans;
    cin>>t;
    while(t--){
    cin >> n >> k;
    div = k / (n-1) ;
    mod = k % (n-1) ;
    ans = n * div + mod ;
    if(mod == 0)
        ans -- ;
    cout << ans << endl ;
    }
    return 0;
}
