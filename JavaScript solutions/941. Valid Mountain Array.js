/**
 * @param {number[]} arr
 * @return {boolean}
 */
var validMountainArray = function (arr) {
  if (arr.length < 3) return false;
  let pos = 0;
  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] == arr[i + 1]) return false;
    else if (arr[i] > arr[i + 1]) {
      pos = i;
      if (pos == 0) return false;
      break;
    }
  }
  for (let i = pos; i < arr.length - 1; i++) {
    if (arr[i] <= arr[i + 1]) return false;
  }
  return true;
};
