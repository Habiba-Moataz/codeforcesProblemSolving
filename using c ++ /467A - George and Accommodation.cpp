#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int p,q;
    int x=0;
    cin>>n;
    while(n--){
        cin>>p;
        cin >>q;
        if(q>=p+2)
            x++;
    }
    cout <<x;
    return 0;
}
