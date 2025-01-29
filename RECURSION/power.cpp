#include <iostream>
using namespace std;

int power(int x,int y){
    int ans=1;
    for(int i=0;i<y;i++){
        ans=ans*x;
    }
    return ans;
}

int rpower(int x,int y){
    //base case 
    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    // processing recursive call
    int ans=rpower(x,y/2);
    if(y%2==0){
        return ans*ans;
    }
    else{
        return x*ans*ans;
    }

}

int main(){
    int a =3;
    int b=2;
    // we need 3^2 i.e. a^b
    cout<<power(a,b)<<endl;


return 0;
}