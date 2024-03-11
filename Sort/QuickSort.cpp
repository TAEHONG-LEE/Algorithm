#include <iostream>
using namespace std;

void QuickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = low;
        int i = low, j = high;
        while(i < j){
            while(i <= high && arr[i] <= arr[pivot]) i++;
            while(arr[j] > arr[pivot]) j--;
            if(i < j) swap(arr[i], arr[j]);
        }            
        swap(arr[pivot], arr[j]);
        QuickSort(arr, low, j-1);
        QuickSort(arr, j+1, high);
        
    }
}