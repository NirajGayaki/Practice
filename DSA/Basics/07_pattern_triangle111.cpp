// GFG : Pattern 4 : Printing the triangle of constant Row Number
#include <iostream>
using namespace std;

// Function Definition
void triangle111(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
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
    triangle111(n);

   // system("pause > 0");
}

// Input: 5
// Output:
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5