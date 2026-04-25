class Solution {
  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low + 1;
        int j = high;

        while (true) {
            while (i <= high && arr[i] <= pivot)
                i++;
            while (j >= low && arr[j] > pivot)
                j--;

            if (i >= j)
                break;
            swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex - 1);
            quickSort(arr, pIndex + 1, high);
        }
    }
};


