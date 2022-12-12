// GFG : Pattern 21 : Printing the Rectangle of Stars
#include <iostream>
using namespace std;


// Function Definition
void starRectangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n){cout << "*";}
            else{cout << " ";}
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
    starRectangle(n);

    // system("pause > 0");
}


// Input: 4
// Output:
// ****
// *  *
// *  *
// ****