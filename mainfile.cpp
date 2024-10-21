#include <iostream>
using namespace std;

// this function asks the user for a positive
// number and then prints the 
// factorial of that number
int main() {
    int positiveNum;
    int factorial = 1;
    
    cout << "Please give me a positive number -> ";
    cin >> positiveNum;

    for (int n = 1; n <= positiveNum; n++) {
        factorial *= n; 
    }

    cout << "The factorial for your number is " << factorial << endl;

    return 0;
}
