

/**
 * each pass finds the current minimum and moves it
 * to the current index
 */
void sort(int * arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {

        // find current min
        int min = i;
        for (j = i; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }

        // swap with current spot
        int k = arr[i];
        arr[i] = arr[min];
        arr[min] = k;

    }

}


