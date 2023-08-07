/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function (arr) {
  let left = 0,
    right = arr.length - 1;
  while (left <= right) {
    let mid = (left + right) / 2;
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
    else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]) left = mid + 1;
    else right = mid;
  }
  return 0;
};
