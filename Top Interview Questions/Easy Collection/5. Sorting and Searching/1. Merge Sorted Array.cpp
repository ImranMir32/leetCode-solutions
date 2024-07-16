class Solution {
public:
    void mergeTheArray(vector<int>& arr, int f, int mid, int l){
        int n1 = mid - f + 1;
        int n2 = l - mid;

        int leftArr[n1], rightArr[n2];

        for (int i = 0; i < n1; ++i)
            leftArr[i] = arr[f + i];
        for (int j = 0; j < n2; ++j)
            rightArr[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = f;
        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }
    
    void mergeSort(vector<int>& nums, int f, int l){
        if (f >= l) return;
        
        int mid = (f + l) / 2;
        
        mergeSort(nums, f, mid);
        mergeSort(nums, mid+1, l);
        
        mergeTheArray(nums, f, mid, l);
    }
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i<n; i++){
            nums1[ m + i] = nums2[i];
        }
        
        mergeSort(nums1, 0, nums1.size() -1);
        return;
    }
};