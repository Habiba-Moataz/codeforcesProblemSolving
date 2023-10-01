#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  long t;
  int a,b,c,d,mx1,mx2,mn1,mn2;
  cin>>t;
  while(t--){
    cin>>a>>b>>c>>d;
    mx1=max(a,b);
    mn1=min(a,b);
    mx2=max(c,d);
    mn2=min(c,d);
    if((mn2>mx1)||(mn1>mx2))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
  }
  return 0;
}
