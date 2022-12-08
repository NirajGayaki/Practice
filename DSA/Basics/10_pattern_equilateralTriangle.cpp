// GFG : Pattern 7 : Equilateral Triangle of Stars
#include <iostream>
using namespace std;

// Function Definition
void equiTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            cout << " ";
        }

        for(int j=1; j<=(2*i)-1; j++){
            cout << "*";
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
    equiTriangle(n);

    // system("pause > 0");
}

// Input: 5
// Output:
//     *
//    ***  
//   *****
//  *******
// *********