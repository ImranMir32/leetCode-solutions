//approach : 1
/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  let k = 0;
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] != 0) {
      nums[k++] = nums[i];
    }
  }
  for (let i = k; i < nums.length; i++) nums[i] = 0;
};

//approach : 2
/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  let n = nums.length;
  let left = 0,
    end = n - 1,
    right = 0;
  while (right <= end) {
    if (nums[right] != 0) {
      [nums[left], nums[right]] = [nums[right], nums[left]];
      left++;
    }
    right++;
  }
};
