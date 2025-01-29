#include <iostream>
using namespace std ;

void m2(int n){
    int s=n;
    cout<<"the input value is :"<<n<<endl;
    int x=0;
    while(n>0){
        int y=n%10;
        x=(x*10)+y;
        n=n/10;
        }
    cout<<"the reverse number is :"<<x<<endl;
    if(x==s){
        cout<<"the given input is palindrome ";
    }
    else{
        cout<<"no";
    }
    }
void m3(int n ){
    for (int i=1;i<=n;i++){
    
    if(n%i==0){
        cout<<i<<endl;

    }
    }

}

void m4(int n){
    for (int i=2;i<n;i++){
        if(n%i==0){cout<<"not prime";
        break;}
        
        
    }
    

}
int main(){
    m4(10);
    

		return 0;
}
 