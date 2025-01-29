#include <iostream>
using namespace std;



void p7(int n){
    
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }


    
}
void p12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }

        for(int j=2*(n-i)-2;j>0;j--){
            cout<<" ";
        }

        for(int j=i;j>=0;j--){
            cout<<j+1;
        }
    cout << endl;

    }
}
void p13(int n){
    for(int i=0;i<n;i++){
        int start=i+1;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }



}
void p14(int n){
    for(int i=0;i<n;i++){
        char x='A';
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
void p15(int n){
    for(int i=0;i<n;i++){
        char x='A';
        for(int j=n-i;j>0;j--){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
void p16(int n){
    char x='A';

    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            
        }
        cout<<endl;
        x++;
        
    }
}
void p17(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }

        char x='A';
        int brk=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<x;
            if(j<=brk){x++;}
            else {x--;}
        } 


        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
}
void p18(int n){
    for(int i=0;i<n;i++){
        int start=n-i-1;
        char x='A'+start;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            start++;
            x++;
        }
        cout<<endl;
    }
}
void p19(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //stars
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    //below part of the pattern
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=n-i;j>1;j--){
            cout<<" ";
        }
        //spaces
        for(int j=n-i;j>1;j--){
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void p20(int n){

    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=n-i;j>1;j--){
            cout<<" ";
        }
        //spaces
        for(int j=n-i;j>1;j--){
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }  

    //below part of the pattern
    for(int i=1;i<n;i++){
        //stars
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //stars
        for(int j=n-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}
void uniquePattern(int n){
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<4;j++){
                cout<<"*";
            }
            
        }
        else if(i%2==0&&i!=0&&i!=n-1){
            for(int j=0;j<1;j++){
                cout<<"*";
            }
            for(int j=0;j<2;j++){
                cout<<" ";
            }
            for(int j=0;j<1;j++){
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
}
void p21(int n){
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            
        }
        else if(i!=0&&i!=n-1){
            for(int j=0;j<1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-2;j++){
                cout<<" ";
            }
            for(int j=0;j<1;j++){
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
}
void p22(int n){
    for(int j=0;j<(2*(n+1))-1;j++){
        cout<<n+1;

    }
    cout<<endl;
    //above part
    // Print the left part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << n+1 - j;
        }
        int x=n-i;
        for(int j=2*(n-i)-1;j>0;j--){
            cout<<x;
        }

        // Print the right part of the pattern
        for (int j = i; j >= 0; j--) {
            cout << n+1 - j;
        }
        cout << endl;
    }

    //below part
    for (int i = n-2; i >= 0; i--) {
        // Print the left part of the pattern
        for (int j = 0; j <= i; j++) {
            cout << n + 1 - j;
        }
        int x = n - i;
        // Print the middle part of the pattern
        for (int j = 2 * (n - i) - 1; j > 0; j--) {
            cout << x;
        }
        // Print the right part of the pattern
        for (int j = i; j >= 0; j--) {
            cout << n + 1 - j;
        }
        cout << endl;
    }
    
    for(int j=0;j<(2*(n+1))-1;j++){
        cout<<n+1;


    }

}
//the pattern number 22 is made by me in unique way of merging so many small patterns and symmetries leaving the striver logic behind someday try to I will try to solve by striver's method ......





int main(){
int n=2;
int x=n-1;
p22(x);


return 0;
}