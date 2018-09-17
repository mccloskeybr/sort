
/**
 * the worst, but easiest to implement, sort
 * simply goes through and swaps any elements that are in
 * incorrect order (n^2 complexity required even on best case).
 */
void sort(int * arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {

        // swap any elems that are in the wrong order
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
}
