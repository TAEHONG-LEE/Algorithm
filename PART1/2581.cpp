#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int M, N;
    int sum = 0;
    int min;
    bool noMin = true;

    cin >> M >> N;

    for(int i = M; i <= N; i++){    
        if(isPrime(i)){
            if(noMin){
                min = i;
                noMin = false;
            }
            sum += i;
        } 
    }
    
    if(noMin){
        cout << -1 << endl;
    } else {
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;
}
