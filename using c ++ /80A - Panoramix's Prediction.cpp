#include <iostream>
using namespace std;

bool check_prime(int);

int main() {

  int n,m;
  cin >> n >>m;
  bool ok =true;
  if(!(check_prime(m)))
    ok=false;
  else{
    for(int i=n+1; i<m; i++){
        if (check_prime(i)){
            ok=false;
            break;
    }
  }
}

  if (ok==true)
    cout <<"YES";
  else
    cout <<"NO";

  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
