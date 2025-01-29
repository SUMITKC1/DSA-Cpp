#include <iostream>
using namespace std;
int y=1 ;
int s=0;
int n ;
void x(){if(y<=n){
    
    s=s+y;
    y++;
    
    
    x();}
    else{
        cout<<"the sum of all natural numbers till "<<n<< "is :"<<s<<endl ;
        }

}

int main(){cin >>n;
    cout<<"given input number:"<<n<<endl;
    
    x();
    return 0;
}