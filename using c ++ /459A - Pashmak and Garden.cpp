#include<iostream>
using namespace std;
int main() {
    int x1,y1,x2,y2;
    int xdiff,ydiff;
    cin>>x1>>y1>>x2>>y2;
    xdiff=abs(x1-x2);
    ydiff=abs(y1-y2);
    if((xdiff!=0)&&(ydiff!=0)&&(xdiff==ydiff)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else if(xdiff==0){
       cout<<x1+ydiff<<" "<<y1<<" "<<x2+ydiff<<" "<<y2<<endl;
    }
    else if(ydiff==0){
        cout<<x1<<" "<<y1+xdiff<<" "<<x2<<" "<<y2+xdiff<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
