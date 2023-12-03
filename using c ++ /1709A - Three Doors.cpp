#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,a[3];
        bool door=true;
        cin>>x;;
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        if(a[x-1]==0)
            door=false;
        else{
            for(int i=0;i<3;i++){
                if(a[i]==i+1)
                    door=false;
            }
        }
        if(door)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
