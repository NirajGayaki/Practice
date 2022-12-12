// GFG : Pattern 20 : Star pattern of two joined half diamonds
#include <iostream>
using namespace std;


// Function Definition
void joinedHalfDiamond(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){cout << "*";}
        for(int k=1; k<=2*(n-i); k++){cout << " ";}
        for(int j=1; j<=i; j++){cout << "*";}
        cout << "\n";
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){cout << "*";}
        for(int k=1; k<=2*(n-i); k++){cout << " ";}
        for(int j=1; j<=i; j++){cout << "*";}
        cout << "\n";
    }
}


// Driver Code
int main(){
    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    joinedHalfDiamond(n);

    // system("pause > 0");
}


// Input: 5
// Output:
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *