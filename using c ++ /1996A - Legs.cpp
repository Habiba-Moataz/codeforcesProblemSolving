#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for (int i=0;i<t;i++){
        cin>>n;
        cout<<n/4+(n%4)/2<<endl;
    }
    return 0;
}
