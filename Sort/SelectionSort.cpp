#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for (int i = 0; i<n-1; i++){
        int min_idx = i;
        for (int j = 1; j<n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}