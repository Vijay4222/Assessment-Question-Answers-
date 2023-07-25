#include <bits/stdc++.h>
using namespace std;


void conquer(int arr[], int si, int mid, int ei) {
    int merged[ei - si + 1];
    int idx1 = si;
    int idx2 = mid + 1;
    int a = 0;

    while (idx1 <= mid && idx2 <= ei) {
        if (arr[idx1] <= arr[idx2]) {
            merged[a++] = arr[idx1++];
        } else {
            merged[a++] = arr[idx2++];
        }
    }

    while (idx1 <= mid) {
        merged[a++] = arr[idx1++];
    }
    while (idx2 <= ei) {
        merged[a++] = arr[idx2++];
    }

    for (int i = 0, j = si; i < a; i++, j++) {
        arr[j] = merged[i];
    }
}

void divide(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }
    int mid = si + (ei - si) / 2;
    divide(arr, si, mid);
    divide(arr, mid + 1, ei);
    conquer(arr, si, mid, ei);
}

int main() {
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    divide(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

