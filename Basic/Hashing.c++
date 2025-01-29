#include <iostream>
using namespace std;

void hashing(){
    int n;
    cin>>n;
    int arr[n];
    //array making
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[12]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"the frequency of "<<number<<" is "<<hash[number]<<endl;
    }

}
void ahashing(){
    int n;
    cin>>n;
    char arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    int hash[25]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]-'a']+=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        char alphabet;
        cin>>alphabet;
        cout<<"the frequency of "<<alphabet<<" is "<<hash[alphabet-'a']<<endl;
    }
    

}
int main (){
ahashing();
return 0;
}