#include <iostream>
using namespace std;

int main() {

  long t,n;
  int mod,div;
  cin>>t;
  while(t--){
    cin>>n;
    div=n/2020;
    mod=n%2020;
    if(mod<=div)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  }
  return 0;
}
