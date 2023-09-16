#include<iostream>
using namespace std;
int main()
{
    int n,k,x=0;
    cin>>n>>k;
    k = 240-k;
    for(int i=1;i<=n;i++){
        if(k>=5*i){
            x++;
            k=k-5*i;
        }
        }
    cout<<x<<endl;
    return 0;
}
