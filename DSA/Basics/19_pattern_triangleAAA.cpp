// GFG : Pattern 16 : Triangle of increasing Row Number as AAA
#include <iostream>
using namespace std;


// Function Definition
void triangleAAA(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){cout << char('A' + i) << " ";}
        cout << "\n";
    }
}


// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    triangleAAA(n);

    // system("pause > 0");
}


// Input: 5
// Output:
// A
// BB
// CCC
// DDDD
// EEEEE