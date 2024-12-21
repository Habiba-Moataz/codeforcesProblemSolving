#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,n,sum;
    cin >> t;
    for (int i=0;i<t;i++){
        cin>>n;
        cout << n/10+n%10 <<endl;
    }
    return 0;
}
