#include <iostream>
using namespace std;

int gcd(int x, int y){
    int mod = x%y;
    while(mod != 0){
        x = y;
        y = mod;
        mod = x%y;
    }
    return y;
}

int lcm(int x, int y){
    return (x * y) / gcd(x, y);
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
    cout << lcm(num1, num2) << endl;
    return 0;
}