#include <iostream>
using namespace std;
int y=1;
int s=1;
int n;
void x(){if(y<=n){
    
    s=s*y;
    y++;
    
    x();


}
else{

    cout<<"the factorial of "<< n<<" is :"<<s<<endl;;
}
}
int main(){cin>>n;
cout <<"the given input number is :"<<n<<endl;
    x();


    return 0;

}