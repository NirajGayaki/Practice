// GFG : Pattern 13 : Triangle Pattern of Increasing Count
#include <iostream>
using namespace std;

// Function Definition
void countTriangle(int n){
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << count << " ";
            count += 1;
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
    countTriangle(n);

    // system("pause > 0";)
}

// Input: 5
// Output:
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15