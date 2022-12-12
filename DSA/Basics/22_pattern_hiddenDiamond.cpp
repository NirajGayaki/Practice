// GFG : Pattern 19 : Printing the Diamond the with spaces and background with stars
#include <iostream>
using namespace std;


// Function Definiton
void hiddenDiamond(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){cout << "*";}
        for(int k=1; k<=2*(i-1); k++){cout << " ";}
        for(int j=1; j<=n-i+1; j++){cout << "*";}
        cout << "\n";
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i+1; j++){cout << "*";}
        for(int k=1; k<=2*(i-1); k++){cout << " ";}
        for(int j=1; j<=n-i+1; j++){cout << "*";}
        cout << "\n";
    }
}


// Driver Code
int main(){
    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    hiddenDiamond(n);

    // system("pause > 0");
}


// Input: 5
// Output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********