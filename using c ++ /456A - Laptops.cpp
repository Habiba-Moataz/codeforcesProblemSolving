#include<iostream>
using namespace std;
int main()
{
	long n,a,b;
	cin>>n;
	while(n--){
        cin>>a>>b;
        if (a>b){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
	}
    cout<<"Poor Alex"<<endl;
    return 0;
}
