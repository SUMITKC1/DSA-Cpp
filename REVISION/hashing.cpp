
// //without hashing 
// #include <iostream>

// using namespace std;

// int occur(int arr[],int size,int x){
//     int cnt=0;
     
//     for(int i=0;i<size;i++){
//         if(arr[i]==x){
//             cnt++;
//         }
// }
// return cnt;
// }


// int main(){
// int arr[4]={1,1,2,3};
// int size = sizeof(arr) / sizeof(arr[0]); 
// cout<<"the number of times 1 appears is :"<<occur(arr,size,1);

// return 0;
// }



//-----------------------------------------------------------------------------------------------------------------



// // with hashing 
// #include <iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// int arr[n];
// //input the array

// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// //printing the array
// cout<<"input array"<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// //hash array
// int hash[13]={0};
// for(int i=0;i<n;i++){
//     hash[arr[i]]++;
// }
// int q;
// cin>>q;
// while(q--){
//     int number;
//     cin>>number;
//     cout<<"the occurence of "<<number <<"  is: "<<hash[number]<<endl;
// }

// return 0;
// }

//--------------------------------------------------------------------------------------
#include <iostream>
using namespace std;


int main(){
int x="a";
//for 'b' we can do like b-a that is ascii value of b minus ascii value of a 
cout<<x;

return 0;
}