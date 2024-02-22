#include <iostream>
using namespace std;

int main(){
    int TestCase, num;
    cin >> TestCase;

    while(TestCase--){
        cin >> num;
        int loc = 0;
        while(num > 0){
            if(num%2 == 1){
                cout << loc << " ";
            }
            num /= 2;
            loc++;
        }
        cout << endl;
    }

    return 0;
}
