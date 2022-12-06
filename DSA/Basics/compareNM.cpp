// GFG : if-else (Decision Making) 
#include <iostream>
#include <string>
using namespace std;

// Function Definition
string compareNM(int n, int m){
    if(n < m){return "lesser";}
    else if(n == m){return "equal";}
    else{return "greater";}
}

// Driver Code
int main(){
    int n = 5;
    int m = 9;

    // Function Calling
    string result = compareNM(n, m);

    cout << result;

    // system("pause > 0");
}

// Output : lesser