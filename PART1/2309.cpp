// 나중에 Vector를 이용해서 풀어보기
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dwarfs[9];
    int totalHeight = 0;

    for(int i = 0; i < 9; i++){
        cin >> dwarfs[i];
        totalHeight += dwarfs[i];
    }
    sort(dwarfs, dwarfs + 9);
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(totalHeight - dwarfs[i] - dwarfs[j] == 100){
                for(int k = 0; k < 9; k++){
                    if(k != i && k != j){
                        cout << dwarfs[k] << '\n';
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}
