#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int x,d,c=0;
    char ch;
    cin>>n>>x;
    while(n--){
        cin>>ch>>d;
        if(ch=='-'){
            if(x>=d)
                x-=d;
            else
                c++;
        }
        else
            x+=d;
    }
    cout<<x<<"  "<<c;
    return 0;
}
