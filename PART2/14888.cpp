#include <iostream>
using namespace std;

int N;
int arr[11];
int maximum = -1000000000, minimum = 1000000000;

void dfs(int idx, int cur, int add, int sub, int mul, int div) {
    if (idx == N) {
        if (cur > maximum) maximum = cur;
        if (cur < minimum) minimum = cur;
        return;
    }

    if (add > 0)
        dfs(idx + 1, cur + arr[idx], add - 1, sub, mul, div);
    if (sub > 0)
        dfs(idx + 1, cur - arr[idx], add, sub - 1, mul, div);
    if (mul > 0)
        dfs(idx + 1, cur * arr[idx], add, sub, mul - 1, div);
    if (div > 0)
        dfs(idx + 1, cur / arr[idx], add, sub, mul, div - 1);
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    
    int add, sub, mul, div;
    cin >> add >> sub >> mul >> div;

    dfs(1, arr[0], add, sub, mul, div); // 첫 번째 수를 시작 값으로 설정

    cout << maximum << '\n';
    cout << minimum << '\n';

    return 0;
}
