#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if (n<=1)
            cout<<"NO"<<endl;
        else if(n %2 == 1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok = false;
            long long div = n;
            while(div > 2){
                div /= 2;
                if(div%2 == 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
