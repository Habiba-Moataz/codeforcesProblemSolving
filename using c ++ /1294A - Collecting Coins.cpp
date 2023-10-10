#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long t;
	long long int a,b,c,n,mx,tot;
	cin>>t;
	while(t--){
        cin>>a>>b>>c>>n;
        mx=max({a,b,c});
        tot=(mx-a)+(mx-b)+(mx-c);
        if(((n-tot)%3==0)&&((n-tot)>=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
    return 0;
}
