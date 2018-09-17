
/**
 * merge sort has better time complexity than quick in worst case
 * but has a larger space complexity as it needs to create
 * temp arrays to store the left and right halves of the array
 * especially useful for sorting linked lists, as in that case
 * it doesn't need to create arrays and can instead just use the nodes
 * themselves
 */

// l and r are the left and right INDICES of arr currently being sorted
void merge(int * arr, int l, int r) {

    int m = (l + r) / 2;

    int leftPartition[m - l + 1];
    int rightPartition[r - m]; // r - (m + 1) - 1 -- gives middle to leftPartition

    // copy arr into partitions
    int i;
    for (i = 0; i < m - l + 1; i++) {
        leftPartition[i] = arr[l + i];
    }
    for (i = 0; i < r - m; i++) {
        rightPartition[i] = arr[m + 1 + i];
    }

    // k way merge (k = 2) back into orig array
    i = 0;
    int j = 0;
    int k = l;  //IMPORTANT: starts at l, not 0
    while (i < m - l + 1 && j < r - m) {

        // put current smallest of left, right into arr
        if (leftPartition[i] < rightPartition[j]) {
            arr[k] = leftPartition[i];
            i++;
        }
        else {
            arr[k] = rightPartition[j];
            j++;
        }

        k++;
    }

    // place remaining elements into arr
    while (i < m - l + 1) {
        arr[k] = leftPartition[i];
        i++;
        k++;
    }
    while (j < r - m) {
        arr[k] = rightPartition[j];
        j++;
        k++;
    }
}

void mergeSort(int * arr, int l, int r) {
    
    // either need to include >= or calculate m differently to prevent stack overflow
    if (l >= r) {
        return;
    }

    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, r);

}

void sort (int * arr, int n) {
    mergeSort(arr, 0, n - 1);
}
