#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
	long t;
	long long a[50],b[50],mina,minb,m,c;
	cin>>t;
	while(t--){
    mina=10000000000;
    minb=10000000000;
    c=0;
    cin>>n;
	for(int i=0;i<n;i++){
        cin>>a[i];
        mina=min(mina,a[i]);
	}
	for(int i=0;i<n;i++){
        cin>>b[i];
        minb=min(minb,b[i]);
	}
	for(int i=0;i<n;i++){
        if((a[i]>mina)&&(b[i]>minb)){
            m=min(a[i],b[i]);
            m=m-(min(mina,minb));
            a[i]=a[i]-m;
            b[i]=b[i]-m;
            c=c+m;
        }
        if(a[i]>mina){
            c=c+(a[i]-mina);
        }
        if(b[i]>minb){
            c=c+(b[i]-minb);
        }
	}
	cout<<c<<endl;
	}
    return 0;
}
