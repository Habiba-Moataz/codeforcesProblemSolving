#include <iostream>
using namespace std;

int main() {

  int n,x;
  cin>>n;
  x=n/2;
  cout<<x<<endl;
  for(int i=0;i<x-1;i++)
    cout<<2<<"  ";
  if(n&1)
    cout<<3<<endl;
  else
    cout<<2<<endl;
  return 0;
}
