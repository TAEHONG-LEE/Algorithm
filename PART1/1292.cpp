#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int sum = 0; 
    int currentNumber = 1; 
    int count = 0; 

    for (int i = 1; i <= B; ++i) {
        if (i >= A) { 
            sum += currentNumber;
        }
        ++count;
        if (count == currentNumber) {
            currentNumber++;
            count = 0;
        }
    }
    cout << sum << endl; 
    return 0;
}
