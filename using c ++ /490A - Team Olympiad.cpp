#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,t[5000],m;
    int one[5000],two[5000],three[5000];
    int x=0,y=0,z=0;
    cin>>n;
    int l=n;
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(t[i]==1){
            one[x]=i+1;
            x++;
        }
        else if(t[i]==2){
            two[y]=i+1;
            y++;
        }
        else{
            three[z]=i+1;
            z++;
        }
    }
    m=min({x,y,z});
    cout<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}
