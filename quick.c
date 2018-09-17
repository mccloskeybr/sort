
void partition(int * arr, int low, int high) {

    int p = (low + high) / 2;
    int pivot = arr[p];

    int h = high;
    int l = low;
    
    // move all values less than the pivot to the first
    // part of the arr, values higher than the pivot to
    // the second.
    // can assume that the pivot is in the correct pos
    // after this loop
    while (h > l) {

        while (h > l && arr[h] > pivot)
            h--;
        while (l < h && arr[l] < pivot)
            l++;
            
        int k = arr[h];
        arr[h] = arr[l];
        arr[l] = k;

        l++;
        h--;

    }

}

void quicksort(int * arr, int low, int high) {

    if (low >= high) {
        return;
    }

    // sort so low numbers on left side of pivot
    // and high numbers on right side of pivot
    partition(arr, low, high);
    
    int mid = (low + high) / 2;
    quicksort(arr, low, mid - 1);
    quicksort(arr, mid + 1, high);

}

void sort(int * arr, int n) {
    quicksort(arr, 0, n - 1);
}

