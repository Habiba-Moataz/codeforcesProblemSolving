#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--){
        long long int a,b,c;
        cin>>a>>b;
        c=(a+b)/3;
        cout<<min(a,min(b,c))<<endl;
	}
    return 0;
}
