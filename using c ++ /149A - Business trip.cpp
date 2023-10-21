#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    int k,a[12],x=0;
    cin>>k;
    for(int i=0;i<12;i++)
        cin>>a[i];
    sort(a,a+12);
    for(int i=11;i>=0;i--){
        if(k<=0)
            break;
        else
            k=k-a[i];
        x++;
    }
    if(k>0)
        cout<<-1;
    else
        cout<<x;
    return 0;
}
