#include <iostream>
using namespace std;

int main(){
    int num;
    int min = 1000000;
    int max = -1000000;
    int digit[1000000];

    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> digit[i];
        if(digit[i] > max){
            max = digit[i];
        } 
        if(digit[i] < min) {
            min = digit[i];
        }
    }

    cout << min << " " << max << endl;
    return 0;
}