#include <iostream>
using namespace std;


int fibonacci(int x, int y){
    return x+y;
}

int main(){
    int n;
    int first = 0;
    int second = 1;
    int fiboNum;

    cin >> n;
    
    if (n == 0){
        cout << first << endl;
    } else if (n == 1) {
        cout << second << endl;
    } else {
        for(int i = 0; i < n-1; i++){
            fiboNum = fibonacci(first, second);
            first = second;
            second = fiboNum;
        }
        cout << fiboNum << endl;
    }
    
    return 0;

}