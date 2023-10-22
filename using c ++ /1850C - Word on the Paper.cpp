#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    string grid [8];
    cin>>t;
    while(t--){
        for(int i=0;i<8;i++)
            cin>>grid[i];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                    if(grid[i][j]!='.')
                    cout<<grid[i][j];
                    }
        }
        cout<<endl;
    }
    return 0;
}
