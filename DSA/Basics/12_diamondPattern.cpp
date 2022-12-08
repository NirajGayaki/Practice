// GFG : Pattern : Diamond Pattern of Stars
#include <iostream>
using namespace std;

// Function Definition
void diamondPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){cout << " ";}
        for(int k=1; k<=i; k++){cout << "* ";}
        cout << "\n";
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){cout << " ";}
        for(int k=1; k<=i; k++){cout << "* ";}
        cout << "\n";
    }
}

// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    diamondPattern(n);

    // system("pause > 0");
}

// Input : 5
// Output :
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * * 
//    * *
//     *
