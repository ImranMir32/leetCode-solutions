/**
 * @param {number[]} nums
 * @return {number[]}
 */
var mergeSort = function (arr, left, right) {
  if (left < right) {
    let middle = Math.floor((left + right) / 2);

    // Recursive calls to sort the two halves
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    // Merge the sorted halves
    merge(arr, left, middle, right);
  }
};

var merge = function (arr, left, middle, right) {
  let n1 = middle - left + 1;
  let n2 = right - middle;

  let leftArr = new Array(n1);
  let rightArr = new Array(n2);

  // Copy data to temporary arrays
  for (let i = 0; i < n1; ++i) leftArr[i] = arr[left + i];
  for (let j = 0; j < n2; ++j) rightArr[j] = arr[middle + 1 + j];

  // Merge the two halves back into the original array
  let i = 0,
    j = 0,
    k = left;
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

  // Copy the remaining elements of leftArr[], if any
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  // Copy the remaining elements of rightArr[], if any
  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
};

var sortArray = function (nums) {
  mergeSort(nums, 0, nums.length - 1);
  return nums;
};
