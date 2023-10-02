#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	long long cnt=0;
	while(n!=1)
	{
		if(n%6==0)
			n/=6,cnt++;
		else if(n%3==0)
			n*=2,cnt++;
		else
		{
			cnt=-1;
			break;
		}
	}
	cout<<cnt<<endl;
	}
    return 0;
}
