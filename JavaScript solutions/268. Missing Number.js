// approach : 1
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  var sum = 0,
    n = nums.length;
  for (var i = 0; i < n; i++) {
    sum += nums[i];
  }
  return (n * (n + 1)) / 2 - sum;
};

//approach :2
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  nums.sort((a, b) => a - b);
  for (var i = 0; i < nums.length; i++) {
    if (i != nums[i]) return i;
  }
  return nums.length;
};

//approach : 3
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
  const map = new Map();
  for (let i = 0; i <= nums.length; i++) {
    map.set(i, 1);
  }
  for (var i = 0; i < nums.length; i++) {
    map.set(nums[i], 2);
  }
  for (const [key, value] of map.entries()) {
    if (value === 1) return key;
  }
  return 0;
};
