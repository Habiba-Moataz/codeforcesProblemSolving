#include<iostream>
using namespace std;
int countDigit(int x)
{
    if (x == 0)
        return 1;
    int count = 0;
    while (x != 0) {
        x = x / 10;
        count++;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,n,m=9;
        cin>>x;
        n=countDigit(x);
        int sze=1;
        int a[9];
        if(x>45)
            cout<<-1<<endl;
        else if(n==1)
            cout<<x<<endl;
        else{
            for(int i=0;i<sze;i++){
                a[i]=m;
                x-=m;
                if(x>=m){
                    m--;
                    sze++;
                }
                else if(x!=0){
                    m=x;
                    sze++;
                }
            }
            for(int i=sze-1;i>=0;i--)
                cout<<a[i];
            cout<<endl;
        }

    }
    return 0;
}
