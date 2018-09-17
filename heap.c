
/**
 * heap sort utilizes the fact that arrays can efficiently store
 * a complete tree (in this case for a min sort we're using a
 * maxheap). as such, it is space efficient.
 */

void heapify(int * arr, int n, int root) {
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    int largest = root;

    // determine largest of (root, left, right)
    // possibility that left and right are out of bounds need to check
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // swap largest with root if necessarry 
    if (largest != root) {
        int k = arr[root];
        arr[root] = arr[largest];
        arr[largest] = k;

        // heapify changed branch
        heapify(arr, n, largest);
    }

}

void sort(int * arr, int n) {

    // build heap
    // start at n/2 - 1 because all leaf nodes are n/2+ and thus have
    // no children
    int i;
    for (i = (n / 2) - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // sort
    for (i = n - 1; i > 0; i--) {
        int k = arr[0];
        arr[0] = arr[i];
        arr[i] = k;

        // move current largest to end and heapify with reduced size
        // esentially a reverse min sort but easier to implement than
        // building a min heap and adding to the front
        //  \-> building a max sort and moving cuurent max to the end
        //      and reducing the size (i starts out at n - 1)
        heapify(arr, i, 0);
    }

    

}
