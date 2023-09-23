#include <iostream>
using namespace std;

int main ()
{
	int x,t;
	cin>>t;
	while(t--){
        cin>>x;
        int y = x%10;
        if(y==1){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==2){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==3){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==4){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }else if(y==5){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==6){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==7){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==8){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
        else if(y==9){
            if(x<10)
                cout<<(y-1)*10+1<<endl;
            else if(x<100)
                cout <<(y-1)*10+3<<endl;
            else if(x<1000)
                cout <<(y-1)*10+6<<endl;
            else
                cout <<y*10<<endl;
        }
	}
	return 0;
}
