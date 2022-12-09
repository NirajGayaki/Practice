// GFG : Pattern 18 : Triangle of Decreasing Column number as CBA
#include <iostream>
using namespace std;


// Function Definition
void triangleCBA(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=n-i+1; j--){cout << char('A' + j - 1) << " ";}
        cout << "\n";
    }
}


// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    triangleCBA(n);

    // system("pause > 0");
}


// Input: 5
// Output:
// E
// E D
// E D C
// E D C B
// E D C B A