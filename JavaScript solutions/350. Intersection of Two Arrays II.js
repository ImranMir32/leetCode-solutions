//approach : 1
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function (nums1, nums2) {
  nums1.sort((a, b) => a - b);
  nums2.sort((a, b) => a - b);
  let ans = [];
  var i = 0,
    j = 0;
  while (i < nums1.length && j < nums2.length) {
    if (nums1[i] === nums2[j]) {
      ans.push(nums1[i]);
      i++;
      j++;
    } else if (nums1[i] < nums2[j]) i++;
    else j++;
  }
  return ans;
};

//approach : 2
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function (nums1, nums2) {
  const map = new Map();
  for (const num of nums1) {
    map.set(num, map.get(num) + 1 || 1);
  }
  const ans = [];
  for (const num of nums2) {
    if (map.has(num) && map.get(num) > 0) {
      ans.push(num);
      map.set(num, map.get(num) - 1);
    }
  }
  return ans;
};

//approach : 3
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function (nums1, nums2) {
  let ans = [];
  for (var i = 0; i < nums1.length; i++) {
    for (var j = 0; j < nums2.length; j++) {
      if (nums1[i] === nums2[j]) {
        ans.push(nums1[i]);
        nums2[j] = -1;
        break;
      }
    }
  }
  return ans;
};
