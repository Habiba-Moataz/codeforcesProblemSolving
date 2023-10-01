#include <iostream>
#include<algorithm>
using namespace std;

int main() {

  int n,m,a[20001],x=0;
  cin>>n>>m;
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(int i=0;i<m;i++){
    if(a[i]<0)
        x=x-a[i];
  }
  cout<<x<<endl;
  return 0;
}
