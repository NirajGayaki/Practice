// GFG : Pattern 22 : Printing the Rectangle of Number according to the Level
#include <iostream>
using namespace std;


// Function Definition
void numberRectangles(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){cout << n - min(i,j) + 1;}
        for(int k=n-1; k>=1; k--){cout << n - min(i,k) + 1;}
        cout << "\n";
    }
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n; j++){cout << n - min(i,j) + 1;}
        for(int k=n-1; k>=1; k--){cout << n - min(i,k) + 1;}
        cout << "\n";
    }
}


// Driver Code
int main(){
    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    numberRectangles(n);

    // system("pause > 0");
}


// Input: 4
// Output:
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4