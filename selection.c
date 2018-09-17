

// find minimum and move it to correct spot

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


