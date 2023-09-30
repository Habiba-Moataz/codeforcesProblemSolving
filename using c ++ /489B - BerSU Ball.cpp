#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {

  int n,m,a[100],b[100],x=0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>m;
  for(int i=0;i<m;i++)
    cin>>b[i];
   int mn =min(sizeof(a),sizeof(b));
   sort(a, a + n);
   sort(b, b + m);
   for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
    {
        if(abs(a[i]-b[j])<=1)
        {
            x++;
            for (int k = j; k < m; k++)
                 b[k] = b[k + 1];
            break;
        }

    }
    if(x==mn)
        break;
   }
   cout<<x<<endl;
  return 0;
}
