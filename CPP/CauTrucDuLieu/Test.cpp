#include <iostream>
using namespace std;

void merge(int *arr, int low, int high, int mid) {
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        } else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }

    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}

void merge_sort(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}

int main() {
    int arr[] = {45, 23, 89, 7, 12, 34};
    int num = sizeof(arr) / sizeof(arr[0]);

    cout << "Mảng ban đầu: ";
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;

    merge_sort(arr, 0, num - 1);

    cout << "Mảng sau khi sắp xếp: ";
    for (int i = 0; i < num; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


