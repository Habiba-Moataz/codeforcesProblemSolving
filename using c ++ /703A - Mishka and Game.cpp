#include <iostream>

using namespace std;

int main ()
{
	int n,m,c,M=0,C=0;
	cin>>n;
	while(n--){
        cin>>m>>c;
        if(m>c)
            M++;
        else if(c>m)
            C++;
	}
	if(M>C)
        cout<<"Mishka"<<endl;
    else if(C>M)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
