// GFG : Pattern 3 : Printing the triangle of increasing column number
#include <iostream>
using namespace std;

// function definition
void triangle123(int n) {
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}

// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // function calling
    triangle123(n);

    // system("pause > 0");
}

// Input: 5
// Output:
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5