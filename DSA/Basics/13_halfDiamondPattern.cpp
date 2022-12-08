// GFG : Pattern 10 : Half Diamond Pattern of Star
#include <iostream>
using namespace std;


// Function Definition
void halfDiamondPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){cout << "* ";}
        cout << "\n";
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){cout << "* ";}
        cout << "\n";
    }
}


// Driver Code
int main(){

    int n=0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    halfDiamondPattern(n);

    // system("pause > 0");
}


// Input: 5
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *