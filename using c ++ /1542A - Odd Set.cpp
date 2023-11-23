#include<iostream>
using namespace std;
int main()
{
	long t;
	cin>>t;
	while(t--){
        int n,odd=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]&1)
                odd++;
        }
        if(odd==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
    return 0;
}
