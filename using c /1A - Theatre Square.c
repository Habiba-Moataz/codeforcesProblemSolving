#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
long long int a;
long long int n,m;
scanf("%lld%lld%lld",&n,&m,&a);
long long int x=n/a,y=m/a;
long long int r;
if(n%a!=0)
  x++;
if(m%a!=0)
   y++;
r=x*y;
printf("%lld",r);
return 0;
}
