// GFG : Pattern 2 : Triangle of Stars
#include <iostream>
using namespace std;

// Function Definition
void printTriangle(int n) {   
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
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
    printTriangle(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *