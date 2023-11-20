#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int m,x;
    float n;
    cin>>n>>m;
    if(m>n)
        cout<<-1<<endl;
    else{
         x=ceil(n/2);
         while(x%m!=0){
            x++;
         }
         cout<<x;
    }
    return 0;
}
