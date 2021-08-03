#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int low , int high){
    int pivot = arr[high];
    int i = (low -1);
    for (int j=low ;j<high;j++){
        if (arr[j] <= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void quickSort(int arr[] , int low ,int high){
    if (low < high){
        int pivot = partition(arr , low , high);
        quickSort(arr , low , pivot -1);
        quickSort(arr , pivot+1 , high);
    }
}

int main(){
    int size = 9;
    int arr[] = {5, 10, 8, 7, 3, 6, 12, 2, 7};
    cout << "UnSorted array:\n";
    for (int i=0; i < size; i++)
    cout << arr[i] << " ";
    cout << '\n';

    quickSort(arr, 0, size);
    cout << "Sorted array:\n";
    for (int i=0; i < size; i++)
    cout << arr[i] << " ";
    cout << '\n';
    return 0;
}