#include <iostream>
using namespace std;

bool identical(int ar1[],int ar2[]){
    for(int i =0;i<26;i++){
        if(ar1[i]!=ar2[i]){
            return false;
        }
    }
    return true;
}


bool ans(string s1,string s2){
    //edge case
    if(s1.length()>s2.length()){
        return false;
    }
    // freq arrays for s1 and s2's windows array 
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        int x=s1[i]-'a';
        freq[x]++;
    }
    int wind[26]={0};
    for(int i=0;i<s2.length();i++){
        int j=i+s1.length();
        if(j<=s2.length()){
            for(int k=i;k<=j;k++){
            int y=s2[k]-'a';
            wind[y]++;
        }
        }
        
        // if two arrays are similar or not 
        for(int i=0;i<26;i++){
            if(identical(freq,wind)){
                return true;
            }
            else{
                for(int i=0;i<26;i++){
                    wind[i]=0;
                }
            }
        }
    }
    return false;
}
int main(){

    cout<<ans("abcsss","aaaaaaaaaaabcsss")<<endl;

return 0;
}