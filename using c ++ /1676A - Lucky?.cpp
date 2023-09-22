#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int n,arr[6],x,y;
	string s;
	cin>>n;
	while(n--){
        cin>>s;
        x=0;
        y=0;
        for(int i =0;i<6;i++){
            arr[i]=s[i];
            if(i<3)
                x=x+arr[i];
            else
                y=y+arr[i];
        }
        if(x==y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
