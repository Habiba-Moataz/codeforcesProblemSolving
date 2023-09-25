#include <iostream>
using namespace std;

int main()
{
    int n;
    double x,y=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        x=x/100;
        y=y+x;
    }
    y=(y*100)/n;
    cout<<y<<endl;
    return 0;
}
