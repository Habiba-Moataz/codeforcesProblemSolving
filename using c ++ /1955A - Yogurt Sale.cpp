#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t,n,a,b,price1,price2;
    cin >> t;
    for (int i=0;i<t;i++){
        cin>>n>>a>>b;
        price1= (n/2)*b+(n%2)*a;
        price2= n*a;
        cout<<min(price1,price2)<<endl;
    }
    return 0;
}
