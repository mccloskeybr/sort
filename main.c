#include <stdio.h>
#include <stdlib.h>

void print_arr(int * arr, int n) {
    int i;
    printf("[ ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {

    // make arr and populate
    int n = 10;
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    printf("UNSORTED:\t");
    print_arr(arr, n);

    // sort
    sort(arr, n);
    printf("SORTED:\t\t");
    print_arr(arr, n);

    return 0;

}
