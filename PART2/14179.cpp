#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int blocks[10];
    for (int i = 0; i < W; i++) {
        cin >> blocks[i];
    }

    int leftMax[10], rightMax[10];

    leftMax[0] = blocks[0];
    for (int i = 1; i < W; i++) {
        if (leftMax[i - 1] > blocks[i]) {
            leftMax[i] = leftMax[i - 1];
        } else {
            leftMax[i] = blocks[i];
        }
    }

    rightMax[W - 1] = blocks[W - 1];
    for (int i = W - 2; i >= 0; i--) {
        if (rightMax[i + 1] > blocks[i]) {
            rightMax[i] = rightMax[i + 1];
        } else {
            rightMax[i] = blocks[i];
        }
    }

    int totalWater = 0;
    for (int i = 0; i < W; i++) {
        int minMax = leftMax[i] < rightMax[i] ? leftMax[i] : rightMax[i];
        totalWater += minMax - blocks[i];
    }

    cout << totalWater << endl;

    return 0;
}
