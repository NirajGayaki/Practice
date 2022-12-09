// GFG : Pattern 15 : Reverse Triangle of increasing column number as ABCD
#include <iostream>
using namespace std;


// Function Definition 
void reverseTriangleABC(int n){
    for(int i=n-1; i>=0; i--){
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
    reverseTriangleABC(n);

    // system("pause > 0");
}

 
// Input: 5
// Output:
// ABCDE
// ABCD
// ABC
// AB
// A