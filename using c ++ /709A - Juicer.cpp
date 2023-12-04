#include<iostream>
using namespace std;
int main()
{
    int n,b,d,x=0,y=0;
    cin>>n>>b>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<=b)
            x+=a[i];
        if(x>d){
            x=0;
            y++;
        }
    }
    cout<<y<<endl;
    return 0;
}
