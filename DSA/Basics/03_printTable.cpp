// GFG : While loop- printTable
#include <iostream>
using namespace std;

// Function Definition
void printTable(int n){
    int mul = 10;
    while(mul){
        cout << mul*n << " ";
        mul -= 1;
    }
}

// Driver Code
int main(){
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    printTable(n);

    // system("pause > 0");
}

// Input: n = 2
// Output: 20 18 16 14 12 10 8 6 4 2