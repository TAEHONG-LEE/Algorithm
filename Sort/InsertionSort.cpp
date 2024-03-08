#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int target = arr[i];
        int j = i-1;
        while(j >= 0 && target < arr[j]){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = target;
    }
}