// #include <iostream>
// using namespace std;
// //s string and n times
// void x(string s,int n){
//     if(n==0){return;}
//     cout<<s<<endl;

//     x(s,n-1);
// }


// int main(){
//     x("aksu",5);

// return 0;
// }



// #include <iostream>
// using namespace std;
// //1 to n
// int sum=0;
// void x(int n){//n is the end
//     if(n!=1){//here the (n!=dabba) dabba is starting 
//         x(n-1);
//     }
    
//     cout<<n<<" ";
    
//     sum=sum+n;
// }

// int main(){
// x(12);
// cout<<endl<<sum;

// return 0;
// }


// #include <iostream>
// using namespace std;

// //sum from 1 to n--> the actual fell of recursion's power..... 
// int  x(int n){
//     if(n==0)return 0;
//     return n+x(n-1);
// }

// int main(){
// cout<<x(3);

// return 0;
// }



// #include <iostream>
// using namespace std;
// //n to 1
// void x(int n){
//     if(n==0)return;
//     cout<<n<<" ";
//     x(n-1);
// }

// int main(){
// x(5);

// return 0;
// }




// #include <iostream>
// using namespace std;

// int factorial(int n){
//      if(n==1)return 1;//something like it's covering the end point 
//     return n*factorial(n-1);
// }

// int main(){
//    cout<<factorial(4);

// return 0;
// }




// #include <iostream>
// #include <cmath> // for pow function

// using namespace std;

// int reverseNumberHelper(int num, int digits) {
//     if (num == 0) {
//         return 0; // Base case: no more digits to process
//     }
    
//     int lastDigit = num % 10; // Extract the last digit
//     return lastDigit * pow(10, digits - 1) + reverseNumberHelper(num / 10, digits - 1);
// }

// int reverseNumber(int num) {
//     int digits = log10(num) + 1; // Calculate the number of digits in the number
//     return reverseNumberHelper(num, digits);
// }

// int main() {
//     int number = 1234;
//     int reversedNumber = reverseNumber(number);
//     cout << "Reversed number: " << reversedNumber << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool palindrome(int i,string& s){
//     if(i>(s.length()/2))return true;
//     if(tolower(s[i])!=tolower(s[s.length()-1-i]))return false;
    
//     return palindrome(i+1,s);
// }


// int main(){
// string s = "madam";
// 	cout<<boolalpha<<palindrome(0,s);//boolalpha is a manipulator in c++ which tells cout to return true instead of 1 and false instead of 0
// 	cout<<endl;

// return 0;
// }


// //fibonacci method 1
// #include <iostream>
// using namespace std;

// int  fibonacci(int n){
//     if(n==0)return 0;
//     if(n==1)return 1;
//     int fib[n+1];
//     fib[0]=0;
//     fib[1]=1;
//     cout<<"0 1 ";
//     for(int i=2;i<=n;i++){
//         fib[i]=fib[i-1]+fib[i-2];
//         cout<<fib[i]<<" ";
//     }
    
// }

// int main(){

// fibonacci(9);
// return 0;
// }

//fibonacci method 2 by recursion
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}

int main(){
  
  // Here, let’s take the value of N to be 4.
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}

