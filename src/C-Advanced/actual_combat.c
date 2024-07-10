#include <stdio.h>
#include <stdbool.h>

int fibonacci_sequence_3(int);
void move(char, char, int);
void tower_hanoi(char, char, char, int);
void quick_sort(int arr[], int, int);
void swap(int *, int *);
void merge_sorted_arrays(int *, int, int, int *, int, int);
bool twoDimensional_array_search(int **, int, int *, int);

int main() {

    //printf("%d", fibonacci_sequence_3(8));

    //tower_hanoi('A', 'B', 'C', 3);

    /*int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    quick_sort(arr, 0, 9);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }*/

    /*int a = 10, b = 20;
    swap(&a, &b);
    printf("a = %d, b = %d", a, b);*/

}

int fibonacci_sequence_3(int n) {

    if (n == 1 || n == 2) return 1;
    return fibonacci_sequence_3(n-1) + fibonacci_sequence_3(n-2);

}

void move(char start, char end, int n) {
    printf("第%d个圆盘: %c --> %c\n", n, start, end);
}
void tower_hanoi(char a, char b, char c, int n) {

    if (n == 1) {
        move(a, c, n);
    } else {
        tower_hanoi(a, c, b, n-1);
        move(a, c, n);
        tower_hanoi(b, a, c, n-1);
    }

}

void quick_sort(int arr[], int left, int right) {

    if (left >= right) return;

    int base = arr[left], l = left, r = right;
    while (l < r) {
        while (l < r && arr[r] >= base) --r;
        arr[l] = arr[r];
        while (l < r && arr[l] <= base) ++l;
        arr[r] = arr[l];
    }

    arr[r] = base;
    quick_sort(arr, left, r-1);
    quick_sort(arr, r+1, right);

}

void swap(int *a, int *b) {

    int tmp = *a;
    *a = *b;
    *b = tmp;

}

void merge_sorted_arrays(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {

    int i = m-1, j = n-1;
    for (int k = m+n-1; k >= 0; --k) {
        if (i < 0) {
            *(nums1+k) = *(nums2+--j);
        } else if (j < 0) {
            *(nums1+k) = *(nums1+--i);
        } else {
            if (*(nums1+i) > *(nums2+j)) {
                *(nums1+k) = *(nums1+--i);
            } else {
                *(nums1+k) = *(nums2+--j);
            }
        }
    }

}

bool twoDimensional_array_search(int **matrix, int matrixSize, int *matrixColSize, int target) {

    if (matrixSize == 0 || *matrixColSize == 0) return 0;

    int x = *matrixColSize-1, y = 0;
    while (x >= 0 && y < matrixColSize) {
        if (*(*(matrix)+y) > target) --x;
        else if (*(*(matrix)+y) < target) ++y;
        else return 1;
    }
    return false;

}
