// GFG : Pattern 7 : Reverse Equilateral Triangle of Stars
#include <iostream>
using namespace std;

// Function Definition
void reverseEquiTriangle(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){ cout << " ";}
        for(int k=1; k<=(2*i)-1; k++){cout << "*";}
        cout << "\n";
    }
}


// Driver Code
int main(){

    int n = 0;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    reverseEquiTriangle(n);

    system("pause > 0");
}