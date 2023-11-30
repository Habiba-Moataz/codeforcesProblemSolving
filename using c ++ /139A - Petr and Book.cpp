#include<iostream>
using namespace std;

int main()
{
    int n,a[7],sum=0,j=0;
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>a[i];
        sum+=a[i];
    }
    while(n>sum){
        n-=sum;
    }
    while(n>0){
        n-=a[j];
        j++;
    }
    cout<<j<<endl;
    return 0;
}
