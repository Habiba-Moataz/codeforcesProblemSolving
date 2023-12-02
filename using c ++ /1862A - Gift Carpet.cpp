#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,x=0;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        if(m<4)
            cout<<"NO"<<endl;
        else{
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(x==0){
                        if(s[j][i]=='v'){
                            x++;
                            break;
                        }
                    }
                    else if(x==1){
                        if(s[j][i]=='i'){
                            x++;
                            break;
                        }
                    }
                    else if(x==2){
                        if(s[j][i]=='k'){
                            x++;
                            break;
                        }
                    }
                    else{
                        if(s[j][i]=='a'){
                            x++;
                            break;
                        }
                    }
                }
                if(x==4)
                    break;
            }
            if(x==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
