#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 1) continue;
        if(isPrime(num)) count++;
    }
    cout << count;
    return 0;
}