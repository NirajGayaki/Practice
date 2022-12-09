// GFG : Pattern 17 : Equilateral Triangle of ABCBA
#include <iostream>
using namespace std;


// Function Definition
void equiTriangleABA(int n){
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){cout << " ";}
        for(int j=1; j<=i; j++){cout << char('A' + j - 1);}
        for(int j=i-1; j>=1; j--){cout << char('A' + j - 1);}
        cout << "\n";
    }
}


// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function calling
    equiTriangleABA(n);

    // system("pause > 0");
}


// Input: 4
// Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA