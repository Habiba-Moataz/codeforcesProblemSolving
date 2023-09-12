#include<iostream>
using namespace std;
int main()
{
    int n,h[30],a[30];
    int x=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>h[i];
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(h[i]==a[j]){
                x++;
            }
        }
    }
    cout<<x<<endl;
    return 0;
}
