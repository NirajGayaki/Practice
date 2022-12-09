// GFG : Pattern 14 : Printing the triangle of increasing column number as ABCD
#include <iostream>
using namespace std;

// Function Definition
void triangleABC(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){cout << char('A' + j) << " ";}
        cout << "\n";
    }
}

// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    triangleABC(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// A
// AB
// ABC
// ABCD
// ABCDE