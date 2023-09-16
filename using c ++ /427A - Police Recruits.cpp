#include<iostream>
using namespace std;
int main()
{
    int n,m,x=0,y=0;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>m;
        x+=m;
        if(x<0){
            y++;
            x=0;
        }
    }
    cout<<y<<endl;
    return 0;
}
