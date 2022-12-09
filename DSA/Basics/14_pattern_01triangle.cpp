// GFG : Pattern 11 : Triangle Pattern of 0 1 alternatively
#include <iostream>
using namespace std;

// Function Definition
void patternTriangle_01(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2 == 0){cout << "1 ";}
            else{cout << "0 ";} 
        }
        cout << "\n";
    }
}

// Driver Code 
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    patternTriangle_01(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1