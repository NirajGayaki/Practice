// GFG : Java Switch Case statement
// Area of Circle or Area of Rectangle
#include <iostream>
using namespace std;

// Function Definition
float switchCase(int choice){
    float area = 0;
    switch (choice)
    {
    case 1:
        float r ;
        cout << "Enter the Radius of Circle : ";
        cin >> r;
        area = 3.14 * r * r;  
        break;
    case 2:
        float l ;
        float b ;
        cout << "Enter the Length & Breadth of Rectangle : ";
        cin >> l >> b;
        area =  l*b;
    }
    return area;
}

// Driver Code
int main(){

    int c = 0;
    cout << "Enter 1->Area of Circle or 2->Area of Rectangle : ";
    cin >> c;

    // Function Calling
    float result = switchCase(c);

    cout << result;
    
    // system("pause > 0");
}

// Input : 1 -> 5     Output : 78.5
// Input : 2 -> 5 10  Output : 50