#include <iostream>
using namespace std;

int main ()
{
	int t;
	char c;
	cin>>t;
	while(t--){
        cin>>c;
        if ((c=='c')||(c=='o')||(c=='d')||(c=='e')||(c=='f')||(c=='r')||(c=='s'))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
