// GFG : Pattern 1
#include <iostream>
using namespace std;

// Function Definition
void printSquare(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
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
    printSquare(n);

    // system("pause > 0");
}

/*
Input: 5
Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/