#include <iostream>
using namespace std;

void reverseTriangle(int n) {
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}

int main(){

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    // Function Calling
    reverseTriangle(n);

    // system("pause > 0");
}