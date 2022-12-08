// GFG : Pattern 6 : Printing the reverse Triangle pattern of increasing column number
#include <iostream>
using namespace std;

// Function Definition
void reverseTriangle(int n){
    for (int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j <<" ";
        }
        cout << "\n";
    }
}

// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number :";
    cin >> n;

    // Function Calling
    reverseTriangle(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2  
// 1 