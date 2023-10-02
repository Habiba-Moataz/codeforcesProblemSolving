#include <iostream>
using namespace std;

int main() {

  int n,m,p;
  char c;
  cin>>n>>m;
  p=0;
  for(int i =0;i<n*m;i++){
    cin>>c;
    if((c=='B')|| (c=='W')|| (c=='G'))
        p++;
  }
  if(p==n*m)
    cout<<"#Black&White";
  else
    cout<<"#Color";
  return 0;
}
