class Solution {
public:

void merge(vector<int> & arr, int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            left++;
        } else {
            temp[index] = arr[right];
            right++;
        }
        index++;
    }

    while (left <= mid) {
        temp[index] = arr[left];
        left++;
        index++;
    }

    while (right <= end) {
        temp[index] = arr[right];
        right++;
        index++;
    }

    // Put the elements back into the original array
    index = 0;
    // for (int i = start; i <= end; i++) 
    while(start<=end)
    {
        arr[start] = temp[index];
        index++;  
    start++;  }
}

void merge_sort(vector<int>& arr, int start, int end) {
    if (start >= end)  // Base case: single element is already sorted
        return;

    int mid = start + (end - start) / 2;

    merge_sort(arr, start, mid);       // Sort the left half
    merge_sort(arr, mid + 1, end);   // Sort the right half
    merge(arr, start, mid, end);     // Merge the two sorted halves
}

    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
        
    }
};