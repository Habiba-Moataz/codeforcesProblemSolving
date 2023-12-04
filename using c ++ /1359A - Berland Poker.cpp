#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,cards;
        cin>>n>>m>>k;
        cards=n/k;
        if(cards>=m)
            cout<<m<<endl;
        else if(m==n)
            cout<<0<<endl;
        else{
            int player1=cards;
            float restCards=m-cards,restk=k-1;
            float player2=ceil(restCards/restk);
            cout<<player1-player2<<endl;
        }
    }
    return 0;
}
