// GFG : Pattern 12 : Printing Number of increasing & decreasing columns in envelope Shape
#include <iostream>
using namespace std;

// Function Definition
void envelopePattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){cout << j << " ";}
        for(int k=1; k<=2*(n-i); k++){cout << "  ";}
        for(int j=i; j>=1; j--){cout << j << " ";}
        cout << "\n";
    }
}

// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    envelopePattern(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1