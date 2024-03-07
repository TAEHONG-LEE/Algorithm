#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A[10];
        for (int i = 0; i < 10; i++) {
            cin >> A[i];
        }

        SelectionSort(A, 10);
        cout << A[7] << endl;
    }
    return 0;
}
