#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        float nf=n;
        double a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long long int avg=ceil(sum/nf);
        cout<<avg<<endl;
    }
    return 0;
}
