
/**
 * insertion is basically bubble sort but more efficient
 * it takes the current value at i and bubbles it down until it
 * is in the correct space
 */

void sort(int * arr, int n) {
    int i, j;

    for (i = 1; i < n; i++) {
    
        j = i;
    
        // bubble down
        while (j > 0 && arr[j - 1] > arr[j]) {
    
            int k = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = k;

            j--;
    
        }
    
    }

}
