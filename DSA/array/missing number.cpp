#include<iostream>
using namespace std;



int main(){
  // //input and printing array(
  // int n;
  // n=5;
  // int arr[4]={1, 3, 4, 5};
    
  //   //start ->
  //   int xor1=0,xor2=0;

  //   int N=n-1;
  //   for(int i=0;i<N;i++){ 
  //       xor2 = xor2 ^ arr[i];
  //       xor1 = xor1 ^ (i+1);
  //   }
  //   xor1= xor1 ^ n;
  //   cout<<xor1 ^ xor2;

    //done....
  // to check the solution 
  // so the below one  is one of the optimal solution of the problem 
  int n=5;
  int arr[4]={1,3,4,5};
  int x= (n*(n+1))/2;
  int cnt=0;
  for(int i=0;i<4;i++){
    cnt=cnt + arr[i];
  }
  cout<< x-cnt;


  return 0;
}



