
#include <vector>
using namespace std;
//the easy trick:::: first focus on creating nCr function so that we can find one number and then putting individually every element in list we can find the row and then after that we will find all rows of triangle hence we have the answer :)
vector<int> generaterow(int row) {
    long long ans = 1;
    vector<int> lis;
    lis.push_back(1);
    for (int i = 1; i <= row; i++) { // Changed loop start from i=1
        ans = ans * (row - i + 1) / i; // Corrected the calculation of next element
        lis.push_back(ans);
    }
    return lis;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> x;
    for (int i = 0; i < N; i++) {
        x.push_back(generaterow(i)); // Removed semi-colon
    }
    return x;
}

int main(){
    
    
    //problem type 1: find all numbers in n th row
    
    //problem type 2: find number at n th row and m th column
    // int row,col;
    // cin>>row>>col;
    // int res=1;
    // for(int i=0;i<col-1;i++){
    //     res=res*(row-1-i);
    //     res=res/(i+1);
    // }
    // cout<< res;

    //problem type 3: find whole traingle of rows
    
    //*to solve the problems use the function made above *


    
    
 


  return 0;
}



