#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,ilast,mx=0,c;
    float m;
    cin>>n>>m;
    float a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        c=ceil(a[i]/m);
        mx=max(mx,c);
        if(mx==c)
            ilast=i+1;
    }
    cout<<ilast<<endl;
    return 0;
}
