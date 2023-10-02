#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long t;
	long double n,x,f;
	cin>>t;
	while(t--){
        cin>>n>>x;
        if(n>2){
        n-=2;
        f=ceil(n/x);
        cout<<f+1<<endl;
        }
        else
            cout<<1<<endl;
	}
    return 0;
}
